#ifndef NXOpen_ANNOTATIONS_COORDINATENOTEBUILDER_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_COORDINATENOTEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_CoordinateNoteBuilder.ja
//
//  Generated by:
//     apiwrap
//
//  WARNING:
//    This file is automatically generated - do not edit by hand
//
#ifdef _MSC_VER
#pragma once
#endif

#include <NXOpen/NXDeprecation.hxx>
#include <vector>
#include <NXOpen/NXString.hxx>
#include <NXOpen/Callback.hxx>
#include <NXOpen/Annotations_PmiAttributeBuilder.hxx>
#include <NXOpen/Annotations_CoordinateNoteBuilder.hxx>
#include <NXOpen/libnxopencpp_annotations_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Annotations
    {
        class CoordinateNoteBuilder;
    }
    namespace Annotations
    {
        class PmiAttributeBuilder;
    }
    class CoordinateSystem;
    class Point;
    namespace Annotations
    {
        class _CoordinateNoteBuilderBuilder;
        class CoordinateNoteBuilderImpl;
        /** Represents a @link Annotations::CoordinateNote Annotations::CoordinateNote@endlink  builder  <br> To create a new instance of this class, use @link Annotations::PmiAttributeCollection::CreateCoordinateNoteBuilder Annotations::PmiAttributeCollection::CreateCoordinateNoteBuilder@endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        ToggleI </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        ToggleJ </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        ToggleK </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        ToggleLabel </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        ToggleLevel </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        ToggleX </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        ToggleY </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        ToggleZ </td> <td> 
         
        0 </td> </tr> 

        </table>  

         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  CoordinateNoteBuilder : public Annotations::PmiAttributeBuilder
        {
            private: CoordinateNoteBuilderImpl * m_coordinatenotebuilder_impl;
            private: friend class  _CoordinateNoteBuilderBuilder;
            protected: CoordinateNoteBuilder();
            public: ~CoordinateNoteBuilder();
            /**Returns  the tracking point 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Point * TrackingPoint
            (
            );
            /**Sets  the tracking point 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetTrackingPoint
            (
                NXOpen::Point * trackingPoint /** trackingpoint */ 
            );
            /**Returns  the tracking csys 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CoordinateSystem * TrackingCsys
            (
            );
            /**Sets  the tracking csys 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetTrackingCsys
            (
                NXOpen::CoordinateSystem * trackingCsys /** trackingcsys */ 
            );
            /**Returns  the str title 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString Title
            (
            );
            /**Sets  the str title 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetTitle
            (
                const NXString & title /** title */ 
            );
            /**Sets  the str title 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetTitle
            (
                const char * title /** title */ 
            );
            /**Returns  the category 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString Category
            (
            );
            /**Sets  the category 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetCategory
            (
                const NXString & category /** category */ 
            );
            /**Sets  the category 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetCategory
            (
                const char * category /** category */ 
            );
            /**Returns  the identifier 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString Identifier
            (
            );
            /**Sets  the identifier 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetIdentifier
            (
                const NXString & identifier /** identifier */ 
            );
            /**Sets  the identifier 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetIdentifier
            (
                const char * identifier /** identifier */ 
            );
            /**Returns  the revision 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString Revision
            (
            );
            /**Sets  the revision 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetRevision
            (
                const NXString & revision /** revision */ 
            );
            /**Sets  the revision 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetRevision
            (
                const char * revision /** revision */ 
            );
            /**Returns  the toggle x 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool ToggleX
            (
            );
            /**Sets  the toggle x 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetToggleX
            (
                bool toggleX /** togglex */ 
            );
            /**Returns  the string prefix x 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString StringPrefixX
            (
            );
            /**Sets  the string prefix x 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetStringPrefixX
            (
                const NXString & stringPrefixX /** stringprefixx */ 
            );
            /**Sets  the string prefix x 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetStringPrefixX
            (
                const char * stringPrefixX /** stringprefixx */ 
            );
            /**Returns  the string suffix x 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString StringSuffixX
            (
            );
            /**Sets  the string suffix x 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetStringSuffixX
            (
                const NXString & stringSuffixX /** stringsuffixx */ 
            );
            /**Sets  the string suffix x 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetStringSuffixX
            (
                const char * stringSuffixX /** stringsuffixx */ 
            );
            /**Returns  the toggle y 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool ToggleY
            (
            );
            /**Sets  the toggle y 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetToggleY
            (
                bool toggleY /** toggley */ 
            );
            /**Returns  the string prefix y 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString StringPrefixY
            (
            );
            /**Sets  the string prefix y 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetStringPrefixY
            (
                const NXString & stringPrefixY /** stringprefixy */ 
            );
            /**Sets  the string prefix y 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetStringPrefixY
            (
                const char * stringPrefixY /** stringprefixy */ 
            );
            /**Returns  the string suffix y 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString StringSuffixY
            (
            );
            /**Sets  the string suffix y 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetStringSuffixY
            (
                const NXString & stringSuffixY /** stringsuffixy */ 
            );
            /**Sets  the string suffix y 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetStringSuffixY
            (
                const char * stringSuffixY /** stringsuffixy */ 
            );
            /**Returns  the toggle z 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool ToggleZ
            (
            );
            /**Sets  the toggle z 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetToggleZ
            (
                bool toggleZ /** togglez */ 
            );
            /**Returns  the string prefix z 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString StringPrefixZ
            (
            );
            /**Sets  the string prefix z 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetStringPrefixZ
            (
                const NXString & stringPrefixZ /** stringprefixz */ 
            );
            /**Sets  the string prefix z 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetStringPrefixZ
            (
                const char * stringPrefixZ /** stringprefixz */ 
            );
            /**Returns  the string suffix z 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString StringSuffixZ
            (
            );
            /**Sets  the string suffix z 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetStringSuffixZ
            (
                const NXString & stringSuffixZ /** stringsuffixz */ 
            );
            /**Sets  the string suffix z 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetStringSuffixZ
            (
                const char * stringSuffixZ /** stringsuffixz */ 
            );
            /**Returns  the toggle i 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool ToggleI
            (
            );
            /**Sets  the toggle i 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetToggleI
            (
                bool toggleI /** togglei */ 
            );
            /**Returns  the string prefix i 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString StringPrefixI
            (
            );
            /**Sets  the string prefix i 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetStringPrefixI
            (
                const NXString & stringPrefixI /** stringprefixi */ 
            );
            /**Sets  the string prefix i 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetStringPrefixI
            (
                const char * stringPrefixI /** stringprefixi */ 
            );
            /**Returns  the string suffix i 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString StringSuffixI
            (
            );
            /**Sets  the string suffix i 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetStringSuffixI
            (
                const NXString & stringSuffixI /** stringsuffixi */ 
            );
            /**Sets  the string suffix i 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetStringSuffixI
            (
                const char * stringSuffixI /** stringsuffixi */ 
            );
            /**Returns  the toggle j 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool ToggleJ
            (
            );
            /**Sets  the toggle j 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetToggleJ
            (
                bool toggleJ /** togglej */ 
            );
            /**Returns  the string prefix j 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString StringPrefixJ
            (
            );
            /**Sets  the string prefix j 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetStringPrefixJ
            (
                const NXString & stringPrefixJ /** stringprefixj */ 
            );
            /**Sets  the string prefix j 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetStringPrefixJ
            (
                const char * stringPrefixJ /** stringprefixj */ 
            );
            /**Returns  the string suffix j 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString StringSuffixJ
            (
            );
            /**Sets  the string suffix j 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetStringSuffixJ
            (
                const NXString & stringSuffixJ /** stringsuffixj */ 
            );
            /**Sets  the string suffix j 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetStringSuffixJ
            (
                const char * stringSuffixJ /** stringsuffixj */ 
            );
            /**Returns  the toggle k 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool ToggleK
            (
            );
            /**Sets  the toggle k 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetToggleK
            (
                bool toggleK /** togglek */ 
            );
            /**Returns  the string prefix k 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString StringPrefixK
            (
            );
            /**Sets  the string prefix k 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetStringPrefixK
            (
                const NXString & stringPrefixK /** stringprefixk */ 
            );
            /**Sets  the string prefix k 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetStringPrefixK
            (
                const char * stringPrefixK /** stringprefixk */ 
            );
            /**Returns  the string suffix k 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString StringSuffixK
            (
            );
            /**Sets  the string suffix k 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetStringSuffixK
            (
                const NXString & stringSuffixK /** stringsuffixk */ 
            );
            /**Sets  the string suffix k 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetStringSuffixK
            (
                const char * stringSuffixK /** stringsuffixk */ 
            );
            /**Returns  the toggle label 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool ToggleLabel
            (
            );
            /**Sets  the toggle label 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetToggleLabel
            (
                bool toggleLabel /** togglelabel */ 
            );
            /**Returns  the string prefix label 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString StringPrefixLabel
            (
            );
            /**Sets  the string prefix label 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetStringPrefixLabel
            (
                const NXString & stringPrefixLabel /** stringprefixlabel */ 
            );
            /**Sets  the string prefix label 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetStringPrefixLabel
            (
                const char * stringPrefixLabel /** stringprefixlabel */ 
            );
            /**Returns  the string suffix label 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString StringSuffixLabel
            (
            );
            /**Sets  the string suffix label 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetStringSuffixLabel
            (
                const NXString & stringSuffixLabel /** stringsuffixlabel */ 
            );
            /**Sets  the string suffix label 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetStringSuffixLabel
            (
                const char * stringSuffixLabel /** stringsuffixlabel */ 
            );
            /**Returns  the toggle level 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool ToggleLevel
            (
            );
            /**Sets  the toggle level 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetToggleLevel
            (
                bool toggleLevel /** togglelevel */ 
            );
            /**Returns  the string prefix level 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString StringPrefixLevel
            (
            );
            /**Sets  the string prefix level 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetStringPrefixLevel
            (
                const NXString & stringPrefixLevel /** stringprefixlevel */ 
            );
            /**Sets  the string prefix level 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetStringPrefixLevel
            (
                const char * stringPrefixLevel /** stringprefixlevel */ 
            );
            /**Returns  the string suffix level 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXString StringSuffixLevel
            (
            );
            /**Sets  the string suffix level 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetStringSuffixLevel
            (
                const NXString & stringSuffixLevel /** stringsuffixlevel */ 
            );
            /**Sets  the string suffix level 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            void SetStringSuffixLevel
            (
                const char * stringSuffixLevel /** stringsuffixlevel */ 
            );
            /**Returns  the decimal place for coordinate note display 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: int DecimalPlace
            (
            );
            /**Sets  the decimal place for coordinate note display 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: void SetDecimalPlace
            (
                int decimalPlace /** decimalplace */ 
            );
        };
    }
}

#ifdef _MSC_VER
#pragma warning(pop)
#endif
#ifdef __GNUC__
#ifndef NX_NO_GCC_DEPRECATION_WARNINGS
#pragma GCC diagnostic warning "-Wdeprecated-declarations"
#endif
#endif

#undef EXPORTLIBRARY
#endif
