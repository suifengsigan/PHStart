using System;
using System.Collections.Generic;
using System.Linq;
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
            var arg = args.Count() > 0 ? args.First() : string.Empty;
            System.Windows.Forms.MessageBox.Show(arg);
        }
    }
}
