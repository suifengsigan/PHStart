/*******************************************************************************
                      Copyright (c) 1998-2006 UGS Corp.
                       Unpublished - All Rights Reserved
 *****************************************************************************


File Description :

    Open API errors for the Modeling application interface.

*****************************************************************************/
#ifndef UF_MODL_ERROR_INCLUDED
#define UF_MODL_ERROR_INCLUDED

/***************************************************************************

  ***************************************************************************/

#ifdef __cplusplus
extern "C" {
#endif

#ifndef NO_ERROR /* cope with similar definition on NT */
#define NO_ERROR                 0
#elif NO_ERROR != 0
#error non-zero definition of NO_ERROR detected
#endif

#define ERROR_MODL_base     875000

#define UF_MODL_ERROR_SHIFT      (ERROR_MODL_base + 0)
#define NOT_VALID_CLASS          (ERROR_MODL_base + 1)
#define NOT_VALID_CONSTRAINTS    (ERROR_MODL_base + 2)
#define NO_RPO_CONSTRAINTS       (ERROR_MODL_base + 3)
#define WRONG_FEATURE_TYPE       (ERROR_MODL_base + 4)
#define EMPTY_LIST               (ERROR_MODL_base + 5)
#define NOT_PLANER_FACE          (ERROR_MODL_base + 6)
#define WRONG_FACE_TYPE          (ERROR_MODL_base + 7)
#define NOT_ENTITY_ID            (ERROR_MODL_base + 8)
#define LIST_NOT_ALLOCATED       (ERROR_MODL_base + 9)
#define NEGATIVE_INDEX           (ERROR_MODL_base + 10)
#define LIST_SMALLER_THEN_INDEX  (ERROR_MODL_base + 11)
#define NO_UNDO_MARK             (ERROR_MODL_base + 12)
#define INVALID_EXPR             (ERROR_MODL_base + 13)
#define NAME_DOES_NOT_EXIST      (ERROR_MODL_base + 14)
#define NAME_ALREADY_EXISTS      (ERROR_MODL_base + 15)
#define RENAME_FAILED            (ERROR_MODL_base + 16)
#define EXPR_IN_USE              (ERROR_MODL_base + 17)
#define FILE_COULD_NOT_BE_OPENED (ERROR_MODL_base + 18)
#define WRITE_TO_FILE_FAILED     (ERROR_MODL_base + 19)
#define CREATE_PRISM_ERROR       (ERROR_MODL_base + 20)
#define CREATE_TORUS_ERROR       (ERROR_MODL_base + 21)
#define CMOD_DATA_ERROR          (ERROR_MODL_base + 22)
#define GET_FEATURE_LIST_ERROR   (ERROR_MODL_base + 23)
#define DELETE_FEATURE_LST_ERROR (ERROR_MODL_base + 24)
#define GET_FEATURE_TAG_ERROR    (ERROR_MODL_base + 25)
#define CANNOT_INIT_MODELER      (ERROR_MODL_base + 26)
#define NON_EXISTENT_EID         (ERROR_MODL_base + 27)
#define NON_FACE_EID             (ERROR_MODL_base + 28)
#define DYNAMIC_MEMORY_EXHAUSTED (ERROR_MODL_base + 29)
#define MODELER_ERROR            (ERROR_MODL_base + 30)
#define NON_EDGE_EID             (ERROR_MODL_base + 31)
#define NON_BODY_EID             (ERROR_MODL_base + 32)
#define INVALID_ENTITY_TYPE      (ERROR_MODL_base + 33)
#define COMPARING_DIFF_TYPES     (ERROR_MODL_base + 34)
#define INVALID_RELATION_TYPE    (ERROR_MODL_base + 35)
#define INVALID_TOLERANCE        (ERROR_MODL_base + 36)
#define ILLEGAL_BOUNDS           (ERROR_MODL_base + 37)
#define FAILED_FIND_CLOSEST      (ERROR_MODL_base + 38)
#define ARRAY_ALLOCATION_ERROR   (ERROR_MODL_base + 39)
#define DIRECTIONS_ARE_COPLANAR  (ERROR_MODL_base + 40)
#define BAD_DIRECTION            (ERROR_MODL_base + 41)
#define BAD_FACE_PARAMETER       (ERROR_MODL_base + 42)
#define UNABLE_TO_CREATE_ISOCRV  (ERROR_MODL_base + 43)
#define UNABLE_TO_CREATE_BSURF   (ERROR_MODL_base + 44)
#define BAD_ITEM_COUNT           (ERROR_MODL_base + 45)
#define BAD_BSPLINE_DATA         (ERROR_MODL_base + 46)
#define UNABLE_TO_CREATE_SHEET   (ERROR_MODL_base + 47)
#define UNABLE_TO_CREATE_EDGES   (ERROR_MODL_base + 48)
#define INVALID_OFFSET           (ERROR_MODL_base + 49)
#define INVALID_DIRECTION_FLAG   (ERROR_MODL_base + 50)
#define PROCESS_FAILURE          (ERROR_MODL_base + 51)
#define UNKNOWN_ERROR            (ERROR_MODL_base + 52)
#define ZERO_VECTOR              (ERROR_MODL_base + 53)
#define INVALID_INTERPOLATION    (ERROR_MODL_base + 54)
#define INVALID_ALIGNMENT        (ERROR_MODL_base + 55)
#define INVALID_EMPHASIS         (ERROR_MODL_base + 56)
#define INVALID_END_POINT        (ERROR_MODL_base + 57)
#define INVALID_POINT            (ERROR_MODL_base + 58)
#define INVALID_PATCH            (ERROR_MODL_base + 59)
#define INVALID_VDEGREE          (ERROR_MODL_base + 60)
#define INVALID_VSTATUS          (ERROR_MODL_base + 61)
#define BAD_SCALE_DIRECTION      (ERROR_MODL_base + 62)
#define BAD_SCALE_BLENDED        (ERROR_MODL_base + 63)
#define BAD_SCALE_ENTITY_TYPE    (ERROR_MODL_base + 64)
#define BAD_SCALE_ENTITY         (ERROR_MODL_base + 65)
#define BAD_SCALE_METHOD         (ERROR_MODL_base + 66)
#define BAD_SCALE_CONNECTION     (ERROR_MODL_base + 67)
#define BAD_SCALE_ITEM_COUNT     (ERROR_MODL_base + 68)
#define BAD_ORIENT_DIRECTION     (ERROR_MODL_base + 69)
#define BAD_ORIENT_ENTITY_TYPE   (ERROR_MODL_base + 70)
#define BAD_ORIENT_ENTITY        (ERROR_MODL_base + 71)
#define BAD_ORIENT_METHOD        (ERROR_MODL_base + 72)
#define BAD_ORIENT_CONNECTION    (ERROR_MODL_base + 73)
#define BAD_ORIENT_ITEM_COUNT    (ERROR_MODL_base + 74)
#define BAD_GUIDE_CONNECTION     (ERROR_MODL_base + 75)
#define BAD_GUIDE_DIRECTION      (ERROR_MODL_base + 76)
#define BAD_GUIDE_ENTITY_TYPE    (ERROR_MODL_base + 77)
#define BAD_GUIDE_ENTITY         (ERROR_MODL_base + 78)
#define BAD_GUIDE_STRING_COUNT   (ERROR_MODL_base + 79)
#define BAD_GUIDE_ITEM_COUNT     (ERROR_MODL_base + 80)
#define BAD_SECTION_CONNECTION   (ERROR_MODL_base + 81)
#define BAD_SECTION_DIRECTION    (ERROR_MODL_base + 82)
#define BAD_SECTION_ENTITY_TYPE  (ERROR_MODL_base + 83)
#define BAD_SECTION_ENTITY       (ERROR_MODL_base + 84)
#define BAD_SECTION_STRING_COUNT (ERROR_MODL_base + 85)
#define BAD_SECTION_ITEM_COUNT   (ERROR_MODL_base + 86)
#define BAD_SPINE_CONNECTION     (ERROR_MODL_base + 87)
#define BAD_SPINE_DIRECTION      (ERROR_MODL_base + 88)
#define BAD_SPINE_ENTITY_TYPE    (ERROR_MODL_base + 89)
#define BAD_SPINE_ENTITY         (ERROR_MODL_base + 90)
#define BAD_SPINE_STRING_COUNT   (ERROR_MODL_base + 91)
#define BAD_SPINE_ITEM_COUNT     (ERROR_MODL_base + 92)
#define BAD_PRIM_CONNECTION      (ERROR_MODL_base + 93)
#define BAD_PRIM_DIRECTION       (ERROR_MODL_base + 94)
#define BAD_PRIM_ENTITY_TYPE     (ERROR_MODL_base + 95)
#define BAD_PRIM_ENTITY          (ERROR_MODL_base + 96)
#define BAD_PRIM_STRING_COUNT    (ERROR_MODL_base + 97)
#define BAD_PRIM_ITEM_COUNT      (ERROR_MODL_base + 98)
#define BAD_CROSS_CONNECTION     (ERROR_MODL_base + 99)
#define BAD_CROSS_DIRECTION      (ERROR_MODL_base + 100)
#define BAD_CROSS_ENTITY_TYPE    (ERROR_MODL_base + 101)
#define BAD_CROSS_ENTITY         (ERROR_MODL_base + 102)
#define BAD_CROSS_STRING_COUNT   (ERROR_MODL_base + 103)
#define BAD_CROSS_ITEM_COUNT     (ERROR_MODL_base + 104)
#define UNABLE_CREATE_SNAPSHOT   (ERROR_MODL_base + 105)
#define TOLERANCE_TOO_SMALL      (ERROR_MODL_base + 106)
#define LS_INVALID_DEGREE        (ERROR_MODL_base + 107)
#define LS_INTERPOLATED          (ERROR_MODL_base + 108)
#define LS_NOT_ENOUGH_DATA       (ERROR_MODL_base + 109)
#define LS_TOO_MANY_WEIGHTS      (ERROR_MODL_base + 110)
#define LS_INVALID_WEIGHT_POS    (ERROR_MODL_base + 111)
#define REQUIRE_PLANAR           (ERROR_MODL_base + 112)
#define REQUIRE_PERPENDICULAR    (ERROR_MODL_base + 113)
#define DIMENSION_LABEL          (ERROR_MODL_base + 114)
#define AUTO_FLAG                (ERROR_MODL_base + 115)
#define SHOW_FLAG                (ERROR_MODL_base + 116)
#define EXTENSION_LINES          (ERROR_MODL_base + 117)
#define CAPTURE_DISTANCE         (ERROR_MODL_base + 118)
#define SNAP_ANGLE               (ERROR_MODL_base + 119)
#define INVALID_OPTION           (ERROR_MODL_base + 120)
#define NO_ISO_V_FOR_BLENDS      (ERROR_MODL_base + 121)
#define VERTICES_ERROR           (ERROR_MODL_base + 122)
#define NO_EID_ERROR             (ERROR_MODL_base + 123)
#define UNABLE_TO_PROJECT        (ERROR_MODL_base + 124)
#define MUST_BE_B_SURFACE        (ERROR_MODL_base + 125)
#define INVALID_VECTOR           (ERROR_MODL_base + 126)
#define USER_ABORT               (ERROR_MODL_base + 127)
#define UNABLE_TO_CREATE_DRIVE_SURF      (ERROR_MODL_base + 128)
#define MODULE_IS_NOT_AVAILABLE  (ERROR_MODL_base + 129)
#define FILE_DOES_NOT_EXIST      (ERROR_MODL_base + 130)
#define COULD_NOT_EXECUTE        (ERROR_MODL_base + 131)
#define DEGENERATE_SPLINE        (ERROR_MODL_base + 132)
#define SPLINE_NOT_CREATED       (ERROR_MODL_base + 133)
#define UNABLE_TO_CREATE_SPLINE  (ERROR_MODL_base + 134)
#define BAD_SPLINE_DATA          (ERROR_MODL_base + 135)
#define LENGTH_TOO_SMALL         (ERROR_MODL_base + 136)
#define RADIUS_TOO_SMALL         (ERROR_MODL_base + 137)
#define DEGENERATE_SURFACE       (ERROR_MODL_base + 138)
#define INVALID_MATRIX           (ERROR_MODL_base + 139)
#define SKETCH_NOT_CREATED       (ERROR_MODL_base + 140)
#define DEPENDENCY_EXISTS        (ERROR_MODL_base + 141)
#define NO_DCURVE                (ERROR_MODL_base + 142)
#define CSYS_NOT_PARALLEL        (ERROR_MODL_base + 143)
#define MUST_BE_SINGLE_FACE      (ERROR_MODL_base + 144)
#define MUST_BE_UNTRIMMED_FACE   (ERROR_MODL_base + 145)
#define INVALID_PERIO_DIRECTION  (ERROR_MODL_base + 146)
#define UNABLE_TO_DIVIDE         (ERROR_MODL_base + 147)
#define UNABLE_TO_TRIM           (ERROR_MODL_base + 148)
#define INVALID_PARASOLID_PARAM  (ERROR_MODL_base + 149)
#define INVALID_GEOMETRY         (ERROR_MODL_base + 150)
#define CURVES_HAVE_GAPS         (ERROR_MODL_base + 151)
#define CURVES_NOT_END_TO_END    (ERROR_MODL_base + 152)
#define CLOSED_CURVE_IN_LIST     (ERROR_MODL_base + 153)
#define INVALID_TARGET_SURFACE   (ERROR_MODL_base + 154)
#define KI_JOURNAL_NOT_OPEN      (ERROR_MODL_base + 155)
#define UNABLE_TO_VARI_OFFSET    (ERROR_MODL_base + 156)
#define NOT_A_NORMAL_POINT       (ERROR_MODL_base + 157)
#define BODY_MUST_BE_SHEET       (ERROR_MODL_base + 158)
#define BAD_PROJECT_METHOD       (ERROR_MODL_base + 159)
#define BAD_POINT_KEY            (ERROR_MODL_base + 160)
#define OCC_NOT_SUPPORTED        (ERROR_MODL_base + 161)
#define SHEET_FRAGMENTED         (ERROR_MODL_base + 162)
#define CANNOT_COMPUTE_BOUNDARY  (ERROR_MODL_base + 163)
#define ITEM_NOT_IN_LIST         (ERROR_MODL_base + 164)
#define WRONG_SWEEP_TYPE         (ERROR_MODL_base + 165)
#define ATTACH_TO_DIFFERENT_BODY (ERROR_MODL_base + 166)
#define ATTACH_TO_LATER_OBJECT   (ERROR_MODL_base + 167)
#define NOT_ROT_FACE             (ERROR_MODL_base + 168)
#define CANNOT_CHANGE_GROOVE_TYPE  (ERROR_MODL_base + 169)
#define NOT_LINEAR_EDGE          (ERROR_MODL_base + 170)
#define FACES_ON_DIFFERENT_BODIES  (ERROR_MODL_base + 171)
#define FACE_NOT_RECTANGULAR     (ERROR_MODL_base + 172)
#define FACES_DO_NOT_MATCH_UV_RANGE (ERROR_MODL_base + 173)
#define UNABLE_TO_MATCH_FACES    (ERROR_MODL_base + 174)
#define UNABLE_TO_CONSTRUCT_JOIN_BSURF (ERROR_MODL_base + 175)
#define UNABLE_TO_CONVERT_FACE_TO_BSURF (ERROR_MODL_base + 176)
#define BAD_PROJECT_DATA         (ERROR_MODL_base + 177)
#define BAD_ANGLE                (ERROR_MODL_base + 178)
#define BAD_DATA                 (ERROR_MODL_base + 179)
#define BAD_GROUP                (ERROR_MODL_base + 180)
#define EDGES_NOT_CONNECTED      (ERROR_MODL_base + 181)
#define INVALID_BRIDGE_TYPE      (ERROR_MODL_base + 182)
#define INVALID_GUIDE_TYPE       (ERROR_MODL_base + 183)
#define INVALID_STRING           (ERROR_MODL_base + 184)
#define UNABLE_TO_CONSTRUCT_BRIDGE (ERROR_MODL_base + 185)
#define POSSIBLE_CORRUPT_PART    (ERROR_MODL_base + 186)
#define UNABLE_TO_THICKEN_SHEET  (ERROR_MODL_base + 187)
#define INVALID_THICKEN_OFFSETS  (ERROR_MODL_base + 188)
#define NO_FILLET                (ERROR_MODL_base + 189)
#define FILLET_PLN_PERP          (ERROR_MODL_base + 190)
#define INVALID_RADIUS           (ERROR_MODL_base + 191)
#define INVALID_SPLINE_PT        (ERROR_MODL_base + 192)
#define INVALID_PROJECT_TYPE     (ERROR_MODL_base + 193)
#define NON_UNIQUE_CURVES        (ERROR_MODL_base + 194)
#define NON_PLANAR_CURVE         (ERROR_MODL_base + 195)
#define UNABLE_TO_COMBINE_CURVES (ERROR_MODL_base + 196)
#define PARALLEL_PROJECT_VECTORS (ERROR_MODL_base + 197)
#define UNABLE_TO_GEN_ISOCLCRV   (ERROR_MODL_base + 198)
#define INVALID_UDEGREE          (ERROR_MODL_base + 199)
#define INVALID_PNT_CNT          (ERROR_MODL_base + 200)
#define INVALID_PATCH_CNT        (ERROR_MODL_base + 201)
#define INSUFFICIENT_PNTS        (ERROR_MODL_base + 202)
#define UNABLE_TO_CREATE_SURFACE (ERROR_MODL_base + 203)
#define INVALID_CORNER_SWITCH    (ERROR_MODL_base + 204)
#define POINT_CLOUD_TOO_SPARSE   (ERROR_MODL_base + 205)
#define INVALID_PROFILE          (ERROR_MODL_base + 206)
#define INVALID_CREATE_METHOD    (ERROR_MODL_base + 207 )
#define INVALID_POLY_STATUS      (ERROR_MODL_base + 208 )
#define BAD_RHO_METHOD           (ERROR_MODL_base + 209 )
#define RHO_DATA_OUT_OF_RANGE    (ERROR_MODL_base + 210 )
#define BAD_LAW_VALUE            (ERROR_MODL_base + 211 )
#define BAD_TANGET_FACE_TAG_ONE  (ERROR_MODL_base + 212 )
#define BAD_TANGET_FACE_TAG_TWO  (ERROR_MODL_base + 213 )
#define INVALID_NUM_CRV          (ERROR_MODL_base + 214 )
#define ERROR_SECSRF_FAILURE     (ERROR_MODL_base + 215 )
#define TOLERANCE_TO_SMALL       (ERROR_MODL_base + 216 )
#define BAD_CONTROL_1            (ERROR_MODL_base + 217 )
#define BAD_CONTROL_2            (ERROR_MODL_base + 218 )
#define BAD_CONTROL_3            (ERROR_MODL_base + 219 )
#define BAD_CONTROL_4            (ERROR_MODL_base + 220 )
#define BAD_CONTROL_5            (ERROR_MODL_base + 221 )
#define BAD_CONTROL_6            (ERROR_MODL_base + 222 )
#define EXCEEDED_MAXIMUM_402     (ERROR_MODL_base + 223 )
#define INVALID_DIRECTION        (ERROR_MODL_base + 224 )
#define ILLEGAL_POINT            (ERROR_MODL_base + 225 )
#define ILLEGAL_OBJECT_TYPE      (ERROR_MODL_base + 226 )
#define NO_OBJECT_OR_EMPTY_LIST  (ERROR_MODL_base + 227 )
#define BAD_CONNECTION           (ERROR_MODL_base + 228 )
#define BAD_CREATING_SNAPSHOT    (ERROR_MODL_base + 229 )
#define UNKOWN_ERROR             (ERROR_MODL_base + 230 )
#define ERROR_BAD_STRING         (ERROR_MODL_base + 231 )
#define BAD_POLY_STATUS          (ERROR_MODL_base + 232 )
#define INVALID_FEATURE_TAG      (ERROR_MODL_base + 233 )
#define INVALID_UNITS_CODE       (ERROR_MODL_base + 234 )
#define INVALID_SURFACE_TYPE     (ERROR_MODL_base + 235 )
#define BAD_LAW_METHOD           (ERROR_MODL_base + 236 )
#define INVALID_ANGLE            (ERROR_MODL_base + 237 )
#define VALUE_OUT_OF_RANGE       (ERROR_MODL_base + 238 )
#define INVALID_INDICATOR        (ERROR_MODL_base + 239 )
#define CANT_USE_FIXED_DAXIS     (ERROR_MODL_base + 240 )
#define INVALID_FACE_EXTEND      (ERROR_MODL_base + 241 )
#define NO_CURVES_SUPPLIED       (ERROR_MODL_base + 242 )
#define CURVE_NOT_THEO_TANG      (ERROR_MODL_base + 243 )
#define INVALID_TAPER_OPTION     (ERROR_MODL_base + 244 )
#define NO_FACES_SUPPLIED        (ERROR_MODL_base + 245 )
#define INVALID_BOTTOM_TYPE      (ERROR_MODL_base + 246 )
#define INVALID_VECTOR_TYPE      (ERROR_MODL_base + 247 )
#define NO_MIN_DIST              (ERROR_MODL_base + 248 )
#define CURVES_NOT_PLANAR        (ERROR_MODL_base + 249 )
#define INVALID_PARM_TYPE        (ERROR_MODL_base + 250 )
#define INVALID_PATCH_BOUNDARY   (ERROR_MODL_base + 251 )
#define UNABLE_TO_PATCH          (ERROR_MODL_base + 252 )
#define NO_FEATURE_DATA          (ERROR_MODL_base + 253 )
#define INVALID_MOVE_OBJECT      (ERROR_MODL_base + 254 )
#define INVALID_DATUM_AXIS_DIR   (ERROR_MODL_base + 255 )
#define INVALID_DATUM_PLANE_DIR  (ERROR_MODL_base + 256 )
#define SPLINE_EXCEEDS_MAX_ORDER     (ERROR_MODL_base + 257)
#define SPLINE_RECEDES_MIN_ORDER      (ERROR_MODL_base + 258)
#define SPLINE_INVALID_POSITION       (ERROR_MODL_base + 259)
#define SPLINE_INSUFF_POINTS          (ERROR_MODL_base + 260)
#define SPLINE_NOT_ENOUGH_CONSTRAINTS (ERROR_MODL_base + 261)
#define SPLINE_EXCEED_MAX_CONSTRAINTS (ERROR_MODL_base + 262)
#define SPLINE_NONINCREASING_PARAMS   (ERROR_MODL_base + 263)
#define SPLINE_INSUFF_DEG_FOR_CNSTRNS (ERROR_MODL_base + 264)
#define SPLINE_CRVATR_HAS_NO_SLOPE    (ERROR_MODL_base + 265)
#define SPLINE_NON_ORTHO_SLP_CRVATR   (ERROR_MODL_base + 266)
#define SPLINE_HASNO_DEFINEDATA       (ERROR_MODL_base + 267)
#define SPLINE_HASNO_INPUTDATA        (ERROR_MODL_base + 268)
#define DATUM_INVALID_CONSTRAINTS     (ERROR_MODL_base + 269)
#define CURVE_MESH_INQUIRE_ERROR  (ERROR_MODL_base + 270 )
#define THRU_CURVES_INQUIRE_ERROR (ERROR_MODL_base + 271 )
#define RULED_INQUIRE_ERROR       (ERROR_MODL_base + 272 )
#define SWEEP_INQUIRE_ERROR       (ERROR_MODL_base + 273 )
#define BPLANE_INQUIRE_ERROR      (ERROR_MODL_base + 274 )
#define REPLACE_FF_STRING_ERROR   (ERROR_MODL_base + 275 )
#define RULED_MIN_STRING_2        (ERROR_MODL_base + 276 )
#define RULED_MAX_STRING_2        (ERROR_MODL_base + 277 )
#define ROW_MORE_STRINGS          (ERROR_MODL_base + 278 )
#define PRIMARY_MIN_STRING_2      (ERROR_MODL_base + 279 )
#define CROSS_MIN_STRING_2        (ERROR_MODL_base + 280 )
#define GUIDE_MAX_STRING_3        (ERROR_MODL_base + 281 )
#define INVALID_STRING_SET        (ERROR_MODL_base + 282 )
#define UNABLE_TO_BOOLEAN         (ERROR_MODL_base + 283 )
#define CANNOT_CHANGE_THD_FACE    (ERROR_MODL_base + 284 )
#define CANNOT_CHANGE_THD_START_FACE (ERROR_MODL_base + 285 )
#define CANNOT_CHANGE_THD_DIRECTION  (ERROR_MODL_base + 286 )
#define UNSUITABLE_OBJECT_TYPES   (ERROR_MODL_base + 287 )
#define SOLID_OBJECT_NOT_ALIVE    (ERROR_MODL_base + 288 )
#define UNABLE_TO_FACET           (ERROR_MODL_base + 289 )
#define INVALID_SKETCH_TYPE       (ERROR_MODL_base + 290 )
#define INVALID_REFERENCE_METHOD  (ERROR_MODL_base + 291 )
#define INVALID_REFERENCE_OBJECT  (ERROR_MODL_base + 292 )
#define INVALID_SKETCH_REATTACH   (ERROR_MODL_base + 293 )
#define NON_EXISTENT_SKETCH       (ERROR_MODL_base + 294 )
#define UF_MODL_ERR_PENDING_UPDATE     (ERROR_MODL_base + 295)
#define UF_MODL_SIMPL_HEAL_FAILED      (ERROR_MODL_base + 296)
#define UF_MODL_SIMPL_NO_FACES_DELETED (ERROR_MODL_base + 297)
#define UF_MODL_SIMPL_FACE_NOT_REMOVED (ERROR_MODL_base + 298)
#define UF_MODL_SIMPL_NO_RETAINED_FACE (ERROR_MODL_base + 299)
#define UF_MODL_NOT_SAME_BODY          (ERROR_MODL_base + 300)
#define UF_MODL_DUPLICATE_ELEMENT      (ERROR_MODL_base + 301)
#define UF_MODL_BAD_ARRAY_LENGTH       (ERROR_MODL_base + 302)
#define UF_MODL_ARRAYS_NON_DISTINCT    (ERROR_MODL_base + 303)
#define UF_MODL_LATER_TIMESTAMP        (ERROR_MODL_base + 304)
#define BAD_BSPLINE_WEIGHT             (ERROR_MODL_base + 305)
#define THRU_FACE_EXISTS               (ERROR_MODL_base + 306)
#define THRU_SAME_AS_PLACEMENT         (ERROR_MODL_base + 307)
#define ATTRIBUTE_ALREADY_EXISTS       (ERROR_MODL_base + 308)
#define ATTRIBUTE_DOES_NOT_EXIST       (ERROR_MODL_base + 309)
#define UF_MODL_UNABLE_TO_FIRE_RAY     (ERROR_MODL_base + 310)

#define INFO_BODY_INSIDE_OUT           (ERROR_MODL_base + 311 )
#define INFO_STRUCTURE_CORRUPT         (ERROR_MODL_base + 312 )
#define INFO_INVALID_GEOMETRY          (ERROR_MODL_base + 313 )
#define INFO_MISSING_GEOMETRY          (ERROR_MODL_base + 314 )
#define INFO_SELF_INTERSECT_FACE       (ERROR_MODL_base + 315 )
#define INFO_SELF_INTERSECT_GEOMETRY   (ERROR_MODL_base + 316 )
#define INFO_DEGENERATE_GEOMETRY       (ERROR_MODL_base + 317 )
#define INFO_INCONSISTENT_GEOMETRY     (ERROR_MODL_base + 318 )
#define INFO_SIZE_BOX_VIOLATION        (ERROR_MODL_base + 319 )
#define INFO_FACE_FACE_INCONSISTENCY   (ERROR_MODL_base + 320 )
#define INFO_OPEN_CURVE_ON_RING_EDGE   (ERROR_MODL_base + 321 )
#define INFO_VERTEX_NOT_ON_CURVE       (ERROR_MODL_base + 322 )
#define INFO_EDGE_REVERSED             (ERROR_MODL_base + 323 )
#define INFO_SP_CURVE_NOT_IN_TOL       (ERROR_MODL_base + 324 )
#define INFO_VERTICES_TOUCH            (ERROR_MODL_base + 325 )
#define INFO_VERTEX_NOT_ON_SURFACE     (ERROR_MODL_base + 326 )
#define INFO_EDGE_NOT_ON_SURFACE       (ERROR_MODL_base + 327 )
#define INFO_EDGES_NOT_ORDERED         (ERROR_MODL_base + 328 )
#define INFO_MISSING_VERTEX            (ERROR_MODL_base + 329 )
#define INFO_LOOPS_INCONSISTENT        (ERROR_MODL_base + 330 )
#define INFO_NOT_G1_CONTINUOUS         (ERROR_MODL_base + 331 )
#define INFO_INCONSISTENT_SHELLS       (ERROR_MODL_base + 332 )
#define INFO_CHECKER_FAILED            (ERROR_MODL_base + 333 )
#define INFO_FACE_CHECKER_FAILED       (ERROR_MODL_base + 334 )
#define INFO_EDGE_FACE_INCONSISTENCY   (ERROR_MODL_base + 335 )
#define INFO_EDGE_EDGE_INCONSISTENCY   (ERROR_MODL_base + 336 )
#define INFO_REGIONS_INCONSISTENT      (ERROR_MODL_base + 337 )
#define INFO_GEOM_TOPOL_INCONSISTENCY  (ERROR_MODL_base + 338 )
#define INFO_ACORN_INCONSISTENCY       (ERROR_MODL_base + 339 )
#define INFO_DUPLICATE_IDS             (ERROR_MODL_base + 340 )
#define INFO_FACES_INCORRECTLY_ORDERED (ERROR_MODL_base + 341 )
#define INFO_UNEXPECTED_ERROR          (ERROR_MODL_base + 342 )
#define INFO_ERROR_DURING_CHECK        (ERROR_MODL_base + 343 )
#define UNABLE_TO_REVERSE_NORMAL       (ERROR_MODL_base + 344 )
#define BODY_ALREADY_REVERSED          (ERROR_MODL_base + 345 )
#define BCURVE_INVALID_POINT           (ERROR_MODL_base + 346 )
#define BCURVE_DEGREE_SLOPE_MISMATCH   (ERROR_MODL_base + 347 )
#define BCURVE_INVALID_SLOPE           (ERROR_MODL_base + 348 )
#define BCURVE_INVALID_EXTENSION       (ERROR_MODL_base + 349 )
#define CONT_ORDER_ILLEGAL             (ERROR_MODL_base + 350 )
#define BRDGCRV_BAD_CURVE1             (ERROR_MODL_base + 351 )
#define BRDGCRV_BAD_CURVE2             (ERROR_MODL_base + 352 )
#define BRDGCRV_BAD_MATCH_PARM         (ERROR_MODL_base + 353 )
#define BRDGCRV_BAD_STIFF_PARM         (ERROR_MODL_base + 354 )
#define BRDGCRV_BAD_SHAPE_EXP          (ERROR_MODL_base + 355 )
#define TEMPLATE_CURVE_UNABLE_TO_EDIT  (ERROR_MODL_base + 356 )
#define BRDGCRV_MATCH_OUT_OF_RANGE     (ERROR_MODL_base + 357 )
#define UF_MODL_ERR_MULTIPLE_BODIES    (ERROR_MODL_base + 358 )
#define UF_MODL_ERR_NULL_SECTION       (ERROR_MODL_base + 359 )
#define UF_MODL_ERR_BLEND_HASNO_INPUTDATA          (ERROR_MODL_base + 360 )
#define UF_MODL_ERR_BLEND_CANT_APPLY               (ERROR_MODL_base + 361 )
#define UF_EXP_NOT_SUPPORTED           (ERROR_MODL_base + 362 )
#define INVALID_REPLACE_FEATURE        (ERROR_MODL_base + 363 )
#define INVALID_REPLACEMENT_FEATURE    (ERROR_MODL_base + 364 )
#define UF_DFO_BAD_PARAMETERS          (ERROR_MODL_base + 365 )
#define UF_DFO_BAD_CONSTRAINTS_DATA    (ERROR_MODL_base + 366 )
#define UF_DFO_CANT_MOVE_FACES         (ERROR_MODL_base + 367 )
#define UF_DFO_CANT_RECREATE_BLEND     (ERROR_MODL_base + 368 )
#define UNABLE_TO_ENLARGE              (ERROR_MODL_base + 369 )
#define INVALID_PERCENTAGE_VALUE       (ERROR_MODL_base + 370 )
#define INVALID_UVRANGE_VALUE          (ERROR_MODL_base + 371 )
#define BAD_TEMPLATE_CURVE             (ERROR_MODL_base + 372 )
#define BAD_TEMPLATE_PRIMARY           (ERROR_MODL_base + 373 )
#define BAD_TEMPLATE_CROSS             (ERROR_MODL_base + 374 )
#define CLOSED_SURFACE_NOT_SUPPORTED   (ERROR_MODL_base + 375 )
#define WRONG_ENLARGE_TYPE             (ERROR_MODL_base + 376 )
#define INVALID_SIMPLE_OPTION          (ERROR_MODL_base + 377 )
#define UNABLE_TO_SEW_SINGLE           (ERROR_MODL_base + 378 )
#define UNABLE_TO_SEW                  (ERROR_MODL_base + 379 )
#define DEGENERATE_GEOMETRY            (ERROR_MODL_base + 380 )
#define UF_SSAO_NOT_SSAO_OBJECT        (ERROR_MODL_base + 381 )
#define UF_SSAO_OBJECT_CREATION_FAILED (ERROR_MODL_base + 382 )
#define UF_SSAO_CURVES_DISCONNECTED    (ERROR_MODL_base + 383 )
#define UF_SSAO_INVALID_MODE           (ERROR_MODL_base + 384 )
#define ZERO_LENGTH_LINE               (ERROR_MODL_base + 385 )
#define UF_STUDIO_stybld_no_uf_data    (ERROR_MODL_base + 386 )
#define UF_MODL_ERR_invalid_pointer    (ERROR_MODL_base + 387 )
#define UF_BOOLEAN_INVALID_UNITE_BODY  (ERROR_MODL_base + 388 )
#define UF_BOOLEAN_CANNOT_CREATE       (ERROR_MODL_base + 389 )
#define UF_BOOLEAN_CANNOT_EDIT         (ERROR_MODL_base + 390 )
#define UF_DDAO_OBJECT_CREATION_FAILED (ERROR_MODL_base + 391 )
#define UF_DDAO_OBJECT_EDIT_FAILED     (ERROR_MODL_base + 392 )
#define UF_DDAO_OBJECT_INQUIRY_FAILED  (ERROR_MODL_base + 393 )
#define UF_DDAO_NOT_DDAO_OBJECT        (ERROR_MODL_base + 394 )
#define UF_DDAO_TARGET_INVALID         (ERROR_MODL_base + 395 )
#define UF_DDAO_RESULT_INQUIRY_FAILED  (ERROR_MODL_base + 396 )
#define UF_MSAO_NO_UF_MSAO_PARMS       (ERROR_MODL_base + 397 )
#define UF_MSAO_OBJECT_CREATE_FAILED   (ERROR_MODL_base + 398 )
#define UF_MSAO_NOT_MSAO_OBJECT        (ERROR_MODL_base + 399 )
#define UF_HPAO_NO_UF_HPAO_PARMS       (ERROR_MODL_base + 400 )
#define UF_HPAO_OBJECT_CREATE_FAILED   (ERROR_MODL_base + 401 )
#define UF_HPAO_OBJECT_EDIT_FAILED     (ERROR_MODL_base + 402 )
#define UF_HPAO_NOT_HPAO_OBJECT        (ERROR_MODL_base + 403 )
#define UF_SURF_POLE_NOT_BSURF         (ERROR_MODL_base + 404 )
#define UF_MODL_ERR_INVALID_LS_WEIGHT  (ERROR_MODL_base + 405 )
#define UF_OCF_INVALID_OFFSET_METHOD   (ERROR_MODL_base + 406 )
#define UF_OCF_INVALID_TRIM_METHOD     (ERROR_MODL_base + 407 )
#define UF_OCF_INVALID_SPAN_METHOD     (ERROR_MODL_base + 408 )
#define UF_OCF_INVALID_BOUNDARY_METHOD (ERROR_MODL_base + 409 )
#define UF_OCF_INVALID_FACE_DATA       (ERROR_MODL_base + 410 )
#define UF_OCF_INVALID_OFFSET_DIRECTION (ERROR_MODL_base + 411 )
#define UF_OCF_INVALID_OFFSET_DISTANCE (ERROR_MODL_base + 412 )
#define UF_OCF_INVALID_INPUT_STRING    (ERROR_MODL_base + 413 )
#define UF_OCF_NO_FACES_ON_OFFSET_SIDE (ERROR_MODL_base+414)
#define UF_OCF_OFFSET_CSF_ERROR        (ERROR_MODL_base+415)
#define UF_OCF_STRING_FACE_OVERLAP_FAILURE (ERROR_MODL_base+416)
#define UF_OCF_TARGET_SURFSET_SPLIT    (ERROR_MODL_base+417)
#define UF_OCF_NO_FACES_TO_OFFSET      (ERROR_MODL_base+418)
#define UF_OCF_NO_CURVES_TO_OFFSET     (ERROR_MODL_base+419)
#define UF_CONT_INVALID_WIRE_TYPE      (ERROR_MODL_base + 420 )
#define UF_CONT_INVALID_FACE_TYPE      (ERROR_MODL_base + 421 )
#define UF_CONT_INVALID_TAG            (ERROR_MODL_base + 422 )
#define UF_CONT_NO_RULES               (ERROR_MODL_base + 423 )
#define UF_CONT_CANT_ADD_RULE          (ERROR_MODL_base + 424 )
#define UF_CONT_CANT_REMOVE_RULE       (ERROR_MODL_base + 425 )
#define UF_CONT_INVALID_RULE_TYPE      (ERROR_MODL_base + 426 )
#define UF_CONT_CANT_CREATE_SECTION    (ERROR_MODL_base + 427 )
#define UF_CONT_MULTIPLE_LOOPS         (ERROR_MODL_base + 428 )
#define UF_CONT_CANT_SET_START         (ERROR_MODL_base + 429 )
#define UF_CONT_CANT_SET_DIRECTION     (ERROR_MODL_base + 430 )
#define UF_CONT_INVALID_SECTION        (ERROR_MODL_base + 431 )
#define UF_CANT_USE_SECTION            (ERROR_MODL_base + 432 )
#define UF_SCAO_NO_UF_SCAO_PARMS       (ERROR_MODL_base + 433 )
#define UF_SCAO_OBJECT_CREATE_FAILED   (ERROR_MODL_base + 434 )
#define UF_SCAO_OBJECT_EDIT_FAILED     (ERROR_MODL_base + 435 )
#define UF_SCAO_NOT_SCAO_OBJECT        (ERROR_MODL_base + 436 )
#define UF_SCAO_NO_REFS_IN_SCAO_PARMS  (ERROR_MODL_base + 437 )
#define UF_MODL_UDF_INVALID_EXPS       (ERROR_MODL_base + 438 )
#define UF_MODL_UDF_INVALID_PARENTS    (ERROR_MODL_base + 439 )
#define UF_MODL_UDF_INVALID_MAPPING    (ERROR_MODL_base + 440 )
#define UF_MODL_UDF_CANT_INSTANTIATED  (ERROR_MODL_base + 441 )
#define UF_MODL_UDF_CANT_EDITED        (ERROR_MODL_base + 442 )
#define UF_MODL_COMPARE_INVALID_PART1              (ERROR_MODL_base + 443 )
#define UF_MODL_COMPARE_INVALID_PART2              (ERROR_MODL_base + 444 )
#define UF_MODL_COMPARE_NO_BODIES_PART1            (ERROR_MODL_base + 445 )
#define UF_MODL_COMPARE_NO_BODIES_PART2            (ERROR_MODL_base + 446 )
#define UF_MODL_COMPARE_EXAMINE_GEOM_FAILED_PART1  (ERROR_MODL_base + 447 )
#define UF_MODL_COMPARE_EXAMINE_GEOM_FAILED_PART2  (ERROR_MODL_base + 448 )
#define UF_MODL_COMPARE_BOTH_ARE_SAME_PARTS        (ERROR_MODL_base + 449 )
#define UF_MODL_ANIMATION_CREATE_FAILED (ERROR_MODL_base + 450 )
#define UF_MODL_ANIMATION_UPDATE_FAILED (ERROR_MODL_base + 451 )
#define UF_MODL_WRONG_CURVE_TYPE (ERROR_MODL_base + 452 )
#define UF_MODL_INVALID_FACE_OR_PLANE (ERROR_MODL_base + 453 )
#define UF_MODL_LIMITS_NOT_SUPPORTED (ERROR_MODL_base + 454 )
#define UF_MODL_INVALID_WORK_PART (ERROR_MODL_base + 455 )
#define UF_MODL_INVALID_ROOT_PART (ERROR_MODL_base + 456 )
#define UF_MODL_WRONG_BODY (ERROR_MODL_base + 457 )
#define UF_MODL_DEVCHK_TOO_FEW_CHECK_POINTS              (ERROR_MODL_base + 458 )
#define UF_MODL_DEVCHK_TOO_FEW_U_CHECK_POINTS            (ERROR_MODL_base + 459 )
#define UF_MODL_DEVCHK_TOO_FEW_V_CHECK_POINTS            (ERROR_MODL_base + 460 )
#define UF_MODL_DEVCHK_WRONG_FIRST_EDGE_TAG              (ERROR_MODL_base + 461 )
#define UF_MODL_DEVCHK_WRONG_FIRST_CURVE_TAG             (ERROR_MODL_base + 462 )
#define UF_MODL_DEVCHK_WRONG_FIRST_FACE_TAG              (ERROR_MODL_base + 463 )
#define UF_MODL_DEVCHK_WRONG_SECOND_CURVE_TAG            (ERROR_MODL_base + 464 )
#define UF_MODL_DEVCHK_WRONG_SECOND_FACE_TAG             (ERROR_MODL_base + 465 )
#define UF_MODL_DEVCHK_WRONG_SECOND_EDGE_TAG             (ERROR_MODL_base + 466 )
#define UF_MODL_DEVCHK_FIRST_EDGE_NOT_ON_FIRST_FACE      (ERROR_MODL_base + 467 )
#define UF_MODL_DEVCHK_SECOND_EDGE_NOT_ON_SECOND_FACE    (ERROR_MODL_base + 468 )
#define UF_MODL_DEVCHK_SAME_TAG_INPUT_TWICE              (ERROR_MODL_base + 469 )
#define UF_MODL_DEVCHK_SAME_EDGE_FACE_COMBO_TWICE        (ERROR_MODL_base + 470 )
#define UF_MODL_INTERSECT_NOT_PLANE_OR_DATUM_PLANE       (ERROR_MODL_base + 471 )
#define UF_MODL_BAD_DATUM_CONSTRAINT                     (ERROR_MODL_base + 472 )
#define UF_MODL_UNABLE_TO_CREATE_GEODESIC_CURVES         (ERROR_MODL_base + 473 )
#define UF_MODL_INVALID_LENGTH_PARAMETER                 (ERROR_MODL_base + 474 )
#define UF_MODL_POINT_NOT_ON_FACE                        (ERROR_MODL_base + 475 )


/*

*/

/*  The following must be kept up to date with the contents of the
    error messages array defined above.
*/
#define MODL_MAX_ERROR 475

#ifdef __cplusplus
}
#endif
#endif /* UF_MODL_ERROR_INCLUDED */
