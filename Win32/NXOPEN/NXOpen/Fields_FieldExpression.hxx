#ifndef NXOpen_FIELDS_FIELDEXPRESSION_HXX_INCLUDED
#define NXOpen_FIELDS_FIELDEXPRESSION_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Fields_FieldExpression.ja
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
#include <NXOpen/Fields_Field.hxx>
#include <NXOpen/libnxopencpp_fields_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Fields
    {
        class FieldExpression;
    }
    namespace Fields
    {
        class Field;
    }
    namespace Fields
    {
        class FieldVariable;
    }
    class Unit;
    namespace Fields
    {
        class _FieldExpressionBuilder;
        class FieldExpressionImpl;
        /**  @brief  Represents the Field Expression class. 

         
             <br> A field (see @link Fields::Field Fields::Field@endlink ) which has <b><tt>exactly one</tt></b> dependent
            variable (see @link Fields::FieldVariable Fields::FieldVariable@endlink ), where the field function defintions
            is implemented using the NX Expression sub-system @link Expression Expression@endlink . <br>  
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_FIELDSEXPORT  FieldExpression : public Fields::Field
        {
            private: FieldExpressionImpl * m_fieldexpression_impl;
            private: friend class  _FieldExpressionBuilder;
            protected: FieldExpression();
            public: ~FieldExpression();
            /** Edit the expression field.  Specifies the new expression string and the array of variables used
                        in the expression string.  Field expressions are children of
                        @link Fields::FieldFormula Fields::FieldFormula@endlink .
                     
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            public: void EditFieldExpression
            (
                const NXString & fieldExpString /** expression string to be associated with the field   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                NXOpen::Unit * unitType /** unit of the field */,
                const std::vector<NXOpen::Fields::FieldVariable *> & indepVarArray /** independent variables to be associated with the field */,
                bool updateFlag /** update flag */
            );
            /** Edit the expression field.  Specifies the new expression string and the array of variables used
                        in the expression string.  Field expressions are children of
                        @link Fields::FieldFormula Fields::FieldFormula@endlink .
                     
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : None */
            void EditFieldExpression
            (
                const char * fieldExpString /** expression string to be associated with the field   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */,
                NXOpen::Unit * unitType /** unit of the field */,
                const std::vector<NXOpen::Fields::FieldVariable *> & indepVarArray /** independent variables to be associated with the field */,
                bool updateFlag /** update flag */
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
