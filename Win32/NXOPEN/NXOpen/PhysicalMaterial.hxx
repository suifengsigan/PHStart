#ifndef NXOpen_PHYSICALMATERIAL_HXX_INCLUDED
#define NXOpen_PHYSICALMATERIAL_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     PhysicalMaterial.ja
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
#include <NXOpen/CAE_IExportableFEEntity.hxx>
#include <NXOpen/Material.hxx>
#include <NXOpen/libnxopencpp_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    class PhysicalMaterial;
    namespace CAE
    {
        class IExportableFEEntity;
    }
    namespace CAE
    {
        class PropertyTable;
    }
    class Material;
    class NXObject;
    class _PhysicalMaterialBuilder;
    class PhysicalMaterialImpl;
    /** Represents Physical Material 
     <br>  Created in NX5.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  PhysicalMaterial : public Material, public virtual CAE::IExportableFEEntity
    {
        /** The different categories of materials. The material list generated will be filtered based on the category */
        public: enum Category
        {
            CategoryMetals/** Metals                              */,
            CategoryPlastics/** Plastics                            */,
            CategoryPolymers/** Polymers                            */,
            CategoryCeramics/** Ceramics                            */,
            CategoryOther/** Other (Not metal, plastic, etc.)    */
        };

        /** The different types of materials. The material list generated will be filtered based on
                the material type chosen */
        public: enum Type
        {
            TypeIsotropic/** Isotropic                           */,
            TypeOrthotropic/** Orthotropic                         */,
            TypeAnisotropic/** Anisotropic                         */,
            TypeFluid = 4/** Fluid                               */,
            TypeGeneralHyperelastic/** Hyperelastic - General              */,
            TypeMooneyrivlin/** Mooney Rivlin                       */,
            TypeMooneyrivlintestdata/** Mooney Rivlin - test data option    */,
            TypePolynomial/** Polynomial                          */,
            TypeReducedpolynomial/** Reduced Polynomial                  */,
            TypeOgden/** Ogden                               */,
            TypeOgdentestdata/** Ogden - test data option            */,
            TypeFoam/** Foam                                */,
            TypeFoamtestdata/** Foam - test data option             */,
            TypeBlatz/** Blatz-Ko                            */,
            TypeArrudaboyce/** Arruda-Boyce                        */,
            TypeArrudaboycetestdata/** Arruda-Boyce - test data option     */,
            TypeNeohooke/** Neo Hooke                           */,
            TypeNeohooketestdata/** Neo Hooke - test data option        */,
            TypeMarlow/** Marlow                              */,
            TypeVanderwaals/** Van Der Waals                       */,
            TypeYeoh/** Yeoh                                */,
            TypeYeohtestdata/** Yeoh - test data option             */,
            TypeGent/** Gent                                */,
            TypeGasket/** Gasket                              */,
            TypeGasketbehavior/** Gasket Behavior                     */,
            TypeShapememoryalloy/** Shape Memory Alloy                  */,
            TypeSussmanbathe/** Sussman-Bathe hyperelastic material */,
            TypeGasketdisplacement/** Gasket with length-based loading    */
        };

        private: PhysicalMaterialImpl * m_physicalmaterial_impl;
        private: friend class  _PhysicalMaterialBuilder;
        protected: PhysicalMaterial();
        public: ~PhysicalMaterial();
        /** Returns the material type
             @return  the type for the material 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::PhysicalMaterial::Type GetMaterialType
        (
        );
        /** Returns the material id
             @return  the id for the material 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: int GetId
        (
        );
        /** Sets the material id
            
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: void SetId
        (
            int materialId /** the id for the material */
        );
        /** Returns the material category
             @return  the category for the material 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: NXString GetCategory
        (
        );
        /** Sets the material category
            
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetCategory
        (
            const NXString & materialCategory /** the category for the material   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
        );
        /** Sets the material category
            
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        void SetCategory
        (
            const char * materialCategory /** the category for the material   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
        );
        /** Sets the material category using international character set
            
         <br>  Created in NX8.5.0.  <br>  
         <br> License requirements : None */
        public: void SetMaterialCategory
        (
            const NXString & materialCategory /** the category for the material */
        );
        /** Sets the material category using international character set
            
         <br>  Created in NX8.5.0.  <br>  
         <br> License requirements : None */
        void SetMaterialCategory
        (
            const char * materialCategory /** the category for the material */
        );
        /** Returns the material category using international character set
             @return  the category for the material 
         <br>  Created in NX8.5.0.  <br>  
         <br> License requirements : None */
        public: NXString GetMaterialCategory
        (
        );
        /** Returns the material sub-category
             @return  the subcategory for the material 
         <br>  Created in NX8.5.0.  <br>  
         <br> License requirements : None */
        public: NXString GetSubcategory
        (
        );
        /** Sets the material sub-category
            
         <br>  Created in NX8.5.0.  <br>  
         <br> License requirements : None */
        public: void SetSubcategory
        (
            const NXString & materialSubcategory /** the subcategory for the material */
        );
        /** Sets the material sub-category
            
         <br>  Created in NX8.5.0.  <br>  
         <br> License requirements : None */
        void SetSubcategory
        (
            const char * materialSubcategory /** the subcategory for the material */
        );
        /** Returns the material alternate name
             @return  the alternate name for the material 
         <br>  Created in NX8.5.0.  <br>  
         <br> License requirements : None */
        public: NXString GetAlternatename
        (
        );
        /** Sets the material alternate name
            
         <br>  Created in NX8.5.0.  <br>  
         <br> License requirements : None */
        public: void SetAlternatename
        (
            const NXString & materialAlternatename /** the alternate name for the material */
        );
        /** Sets the material alternate name
            
         <br>  Created in NX8.5.0.  <br>  
         <br> License requirements : None */
        void SetAlternatename
        (
            const char * materialAlternatename /** the alternate name for the material */
        );
        /** Returns the material description
             @return  the description for the material 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: NXString GetDescription
        (
        );
        /** Sets the material description
            
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void SetDescription
        (
            const NXString & materialDescription /** the description for the material */
        );
        /** Sets the material description
            
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        void SetDescription
        (
            const char * materialDescription /** the description for the material */
        );
        /** Returns true if the material is locally defined (not a library/Teamcenter material) 
             @return  true if it is a locally defined material and false if it is a loaded library material or Teamcenter item revision 
         <br>  Created in NX7.5.3.  <br>  
         <br> License requirements : None */
        public: bool IsNonlibraryMaterial
        (
        );
        /** Returns true if the material is loaded from a library (not Teamcenter)
             @return  true if it a loaded library material and false if it is a local material or  a Teamcenter item revision 
         <br>  Created in NX7.5.3.  <br>  
         <br> License requirements : None */
        public: bool IsLoadedLibraryMaterial
        (
        );
        /** Returns true if the material is loaded from Teamcenter 
             @return  true if it a loaded Teamcenter material and false if it is a local material or a loaded library material 
         <br>  Created in NX7.5.3.  <br>  
         <br> License requirements : None */
        public: bool IsLoadedTeamcenterMaterialItem
        (
        );
        /** Returns the library name if the material was loaded from a library 
             @return  the name of the library or NULL for nonlibrary materials   
         <br>  Created in NX7.5.3.  <br>  
         <br> License requirements : None */
        public: NXString GetLibraryName
        (
        );
        /** Returns the Teamcenter item if the material was loaded from Teamcenter
             @return  the Teamcenter item or NULL for non-Teamcenter materials  
         <br>  Created in NX7.5.3.  <br>  
         <br> License requirements : None */
        public: NXString GetTeamcenterMaterialItem
        (
        );
        /** Returns the material version 
             @return  the material version or NULL for non-versioned materials 
         <br>  Created in NX7.5.3.  <br>  
         <br> License requirements : None */
        public: NXString GetVersion
        (
        );
        /** Returns whether the material was copied from another material
             @return  true if it is a copy of another (parent) material and false if it is not 
         <br>  Created in NX8.5.0.  <br>  
         <br> License requirements : None */
        public: bool HasParentmaterial
        (
        );
        /** Returns the parent material that the material was copied from
             @return  material that the material was originally copied from (parent) 
         <br>  Created in NX8.5.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::PhysicalMaterial * GetParentmaterial
        (
        );
        /** Returns whether the material was copied from a library material
             @return  true if it is a copy of a library material and false if it is not 
         <br>  Created in NX8.5.0.  <br>  
         <br> License requirements : None */
        public: bool HasParentlibrarymaterial
        (
        );
        /** Returns the parent libary material information
            
         <br>  Created in NX8.5.0.  <br>  
         <br> License requirements : None */
        public: void GetParentlibrarymaterial
        (
            NXString* parentName /** parentname */ ,
            NXString* parentLibraryName /** parentlibraryname */ 
        );
        /** Assigns the material to solid bodies
            
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void AssignObjects
        (
            const std::vector<NXOpen::NXObject *> & objects /** objects to assign this material to */
        );
        /** Assigns the material to all solid bodies
            
         <br>  Created in NX7.5.3.  <br>  
         <br> License requirements : None */
        public: void AssignToAllBodies
        (
        );
        /** Assigns the material to all solid bodies without a material already assigned
            
         <br>  Created in NX7.5.3.  <br>  
         <br> License requirements : None */
        public: void AssignToBodiesWithoutMaterials
        (
        );
        /** Assigns the material to all solid bodies not using the preferred material
            
         <br>  Created in NX7.5.3.  <br>  
         <br> License requirements : None */
        public: void AssignToBodiesNotUsingPreferredMaterial
        (
        );
        /** Removes the material assignment from all the objects that has it currently assigned
            
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void UnassignAllObjects
        (
        );
        /** Finds the objects using this material
            
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void GetUsage
        (
            std::vector<NXOpen::NXObject *> & objects /** the objects using the material           */
        );
        /** Creates new (copied) material with same properties as the original material.  The name of the new (copied) material will be unique and based on the name of the original material.
             @return  the new material copied from this material 
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::PhysicalMaterial * Copy
        (
            NXOpen::NXObject * partObject /** object in part where to copy material to */
        );
        /** Copies a library material to a part.  
             @return  the new material copied from this material 
         <br>  Created in NX6.0.2.  <br>  
         <br> License requirements : None */
        public: NXOpen::PhysicalMaterial * CopyLibMatlToPart
        (
            NXOpen::NXObject * partObject /** object in part where to copy material to */
        );
        /** Copies a library material to a part.  The copied (local) material can either be set to be editable or non-editable which determines whether the material can be modified or not.
             @return  the new material copied from this material 
         <br>  Created in NX8.5.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::PhysicalMaterial * CopyLibMatlToPart
        (
            NXOpen::NXObject * partObject /** object in part where to copy material to */,
            bool editable /** when true, creates a local material ready for user editting.  When false, it creates an exact copy of a loaded library material.  
                                                                                    The difference between loading and copying with this set to false is loading will get the latest library version whereas if the 
                                                                                    library material passed in is not synchronized with the latest version, the copy will also not be synchronized with the latest version. */
        );
        /** Deletes a material from the part.
            
         <br>  Created in NX6.0.0.  <br>  
         <br> License requirements : None */
        public: void Delete
        (
        );
        /** Re-synchronizes a loaded library material to match its latest library definition.
            
         <br>  Created in NX7.5.2.  <br>  
         <br> License requirements : None */
        public: void ResyncWithLibraryDefinition
        (
        );
        /** Re-synchronizes a material with its definition.  The definition could be a library definition
                or a parent material's (from a copy) definition.
            
         <br>  Created in NX8.5.0.  <br>  
         <br> License requirements : None */
        public: void UpdateMaterialProperties
        (
        );
        /** Displays the property values for the material in the information window. 
            
         <br>  Created in NX7.5.3.  <br>  
         <br> License requirements : None */
        public: void InfoMaterial
        (
        );
        /** Writes the property values for the material to a file. 
            
         <br>  Created in NX7.5.3.  <br>  
         <br> License requirements : None */
        public: void InfoMaterialToFile
        (
            bool bOverride /** if the file already exists, true override the file, false append to the file */,
            const NXString & pcFileName /** the full path including filename of file where the information should be written   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
        );
        /** Writes the property values for the material to a file. 
            
         <br>  Created in NX7.5.3.  <br>  
         <br> License requirements : None */
        void InfoMaterialToFile
        (
            bool bOverride /** if the file already exists, true override the file, false append to the file */,
            const char * pcFileName /** the full path including filename of file where the information should be written   <br>  NOTE: The full Unicode character set is not supported for this parameter.  <br> */
        );
        /** Returns the property table that contains the properties for this material.
             @return  
         <br>  Created in NX7.5.3.  <br>  
         <br> License requirements : None */
        public: NXOpen::CAE::PropertyTable * GetPropTable
        (
        );
        /** Returns the solver card syntax strings for this entity.  @return  
         <br>  Created in NX8.5.0.  <br>  
         <br> License requirements : None */
        public: virtual std::vector<NXString> GetSolverCardSyntax
        (
        );
    };
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
