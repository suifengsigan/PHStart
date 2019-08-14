using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Windows.Forms;

namespace CSharpEntry
{
    static class Program
    {
        /// <summary>
        /// 应用程序的主入口点。
        /// </summary>
        [STAThread]
        static void Main(string[] args)
        {
            AppDomain.CurrentDomain.AssemblyResolve += CurrentDomain_AssemblyResolve;
            Show(args);
        }

        static void Show(string[] args)
        {
            try
            {
                NX.Entry.GetInstance().ManagedLoader_Run(args);
            }
            catch (Exception ex)
            {
                System.Windows.Forms.MessageBox.Show(ex.Message);
                System.Windows.Forms.MessageBox.Show(string.Join("  \r\n   ", args));
            }
        }

        private static Assembly CurrentDomain_AssemblyResolve(object sender, ResolveEventArgs args)
        {
            var assemblyName = new AssemblyName(args.Name);
            if (assemblyName.Name == "ManagedLoader"||assemblyName.Name.ToUpper().Contains("NXOpen".ToUpper()))
            {
                string fileName = System.Diagnostics.Process.GetCurrentProcess().MainModule.FileName;
                var dir = System.IO.Path.GetDirectoryName(fileName);
                var info = new System.IO.DirectoryInfo(dir);
                var UGII_BASE_DIR = info.Parent.FullName;

                var UGMANAGEDPATH = Path.Combine(dir, "managed", assemblyName.Name + ".dll");
                if (!File.Exists(UGMANAGEDPATH))
                {
                    UGMANAGEDPATH = Path.Combine(UGII_BASE_DIR, "NXBIN", "managed", assemblyName.Name + ".dll");
                }

                if (!File.Exists(UGMANAGEDPATH))
                {
                    UGMANAGEDPATH = Path.Combine(System.Environment.GetEnvironmentVariable("UGII_BASE_DIR") ?? string.Empty,"UGII", "managed", assemblyName.Name + ".dll");
                }

                if (!File.Exists(UGMANAGEDPATH))
                {
                    UGMANAGEDPATH = Path.Combine(System.Environment.GetEnvironmentVariable("UGII_BASE_DIR") ?? string.Empty, "NXBIN", "managed", assemblyName.Name + ".dll");
                }

                if (File.Exists(UGMANAGEDPATH))
                {
                    return Assembly.LoadFile(UGMANAGEDPATH);
                }
            }
            return null;
        }
    }
}
