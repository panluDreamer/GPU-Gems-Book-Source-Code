
// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:32 2004)
// 
// Sylvain Lefebvre - 2002 - Sylvain.Lefebvre@imag.fr
// --------------------------------------------------------
#include "glux_no_redefine.h"
#include "glux_ext_defs.h"
#include "gluxLoader.h"
#include "gluxPlugin.h"
// --------------------------------------------------------
//         Plugin creation
// --------------------------------------------------------

#ifndef __GLUX_GL_EXT_vertex_shader__
#define __GLUX_GL_EXT_vertex_shader__

GLUX_NEW_PLUGIN(GL_EXT_vertex_shader);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#ifndef GL_VERTEX_SHADER_EXT
#  define GL_VERTEX_SHADER_EXT 0x8780
#endif
#ifndef GL_VERTEX_SHADER_BINDING_EXT
#  define GL_VERTEX_SHADER_BINDING_EXT 0x8781
#endif
#ifndef GL_OP_INDEX_EXT
#  define GL_OP_INDEX_EXT 0x8782
#endif
#ifndef GL_OP_NEGATE_EXT
#  define GL_OP_NEGATE_EXT 0x8783
#endif
#ifndef GL_OP_DOT3_EXT
#  define GL_OP_DOT3_EXT 0x8784
#endif
#ifndef GL_OP_DOT4_EXT
#  define GL_OP_DOT4_EXT 0x8785
#endif
#ifndef GL_OP_MUL_EXT
#  define GL_OP_MUL_EXT 0x8786
#endif
#ifndef GL_OP_ADD_EXT
#  define GL_OP_ADD_EXT 0x8787
#endif
#ifndef GL_OP_MADD_EXT
#  define GL_OP_MADD_EXT 0x8788
#endif
#ifndef GL_OP_FRAC_EXT
#  define GL_OP_FRAC_EXT 0x8789
#endif
#ifndef GL_OP_MAX_EXT
#  define GL_OP_MAX_EXT 0x878A
#endif
#ifndef GL_OP_MIN_EXT
#  define GL_OP_MIN_EXT 0x878B
#endif
#ifndef GL_OP_SET_GE_EXT
#  define GL_OP_SET_GE_EXT 0x878C
#endif
#ifndef GL_OP_SET_LT_EXT
#  define GL_OP_SET_LT_EXT 0x878D
#endif
#ifndef GL_OP_CLAMP_EXT
#  define GL_OP_CLAMP_EXT 0x878E
#endif
#ifndef GL_OP_FLOOR_EXT
#  define GL_OP_FLOOR_EXT 0x878F
#endif
#ifndef GL_OP_ROUND_EXT
#  define GL_OP_ROUND_EXT 0x8790
#endif
#ifndef GL_OP_EXP_BASE_2_EXT
#  define GL_OP_EXP_BASE_2_EXT 0x8791
#endif
#ifndef GL_OP_LOG_BASE_2_EXT
#  define GL_OP_LOG_BASE_2_EXT 0x8792
#endif
#ifndef GL_OP_POWER_EXT
#  define GL_OP_POWER_EXT 0x8793
#endif
#ifndef GL_OP_RECIP_EXT
#  define GL_OP_RECIP_EXT 0x8794
#endif
#ifndef GL_OP_RECIP_SQRT_EXT
#  define GL_OP_RECIP_SQRT_EXT 0x8795
#endif
#ifndef GL_OP_SUB_EXT
#  define GL_OP_SUB_EXT 0x8796
#endif
#ifndef GL_OP_CROSS_PRODUCT_EXT
#  define GL_OP_CROSS_PRODUCT_EXT 0x8797
#endif
#ifndef GL_OP_MULTIPLY_MATRIX_EXT
#  define GL_OP_MULTIPLY_MATRIX_EXT 0x8798
#endif
#ifndef GL_OP_MOV_EXT
#  define GL_OP_MOV_EXT 0x8799
#endif
#ifndef GL_OUTPUT_VERTEX_EXT
#  define GL_OUTPUT_VERTEX_EXT 0x879A
#endif
#ifndef GL_OUTPUT_COLOR0_EXT
#  define GL_OUTPUT_COLOR0_EXT 0x879B
#endif
#ifndef GL_OUTPUT_COLOR1_EXT
#  define GL_OUTPUT_COLOR1_EXT 0x879C
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD0_EXT
#  define GL_OUTPUT_TEXTURE_COORD0_EXT 0x879D
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD1_EXT
#  define GL_OUTPUT_TEXTURE_COORD1_EXT 0x879E
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD2_EXT
#  define GL_OUTPUT_TEXTURE_COORD2_EXT 0x879F
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD3_EXT
#  define GL_OUTPUT_TEXTURE_COORD3_EXT 0x87A0
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD4_EXT
#  define GL_OUTPUT_TEXTURE_COORD4_EXT 0x87A1
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD5_EXT
#  define GL_OUTPUT_TEXTURE_COORD5_EXT 0x87A2
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD6_EXT
#  define GL_OUTPUT_TEXTURE_COORD6_EXT 0x87A3
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD7_EXT
#  define GL_OUTPUT_TEXTURE_COORD7_EXT 0x87A4
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD8_EXT
#  define GL_OUTPUT_TEXTURE_COORD8_EXT 0x87A5
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD9_EXT
#  define GL_OUTPUT_TEXTURE_COORD9_EXT 0x87A6
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD10_EXT
#  define GL_OUTPUT_TEXTURE_COORD10_EXT 0x87A7
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD11_EXT
#  define GL_OUTPUT_TEXTURE_COORD11_EXT 0x87A8
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD12_EXT
#  define GL_OUTPUT_TEXTURE_COORD12_EXT 0x87A9
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD13_EXT
#  define GL_OUTPUT_TEXTURE_COORD13_EXT 0x87AA
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD14_EXT
#  define GL_OUTPUT_TEXTURE_COORD14_EXT 0x87AB
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD15_EXT
#  define GL_OUTPUT_TEXTURE_COORD15_EXT 0x87AC
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD16_EXT
#  define GL_OUTPUT_TEXTURE_COORD16_EXT 0x87AD
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD17_EXT
#  define GL_OUTPUT_TEXTURE_COORD17_EXT 0x87AE
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD18_EXT
#  define GL_OUTPUT_TEXTURE_COORD18_EXT 0x87AF
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD19_EXT
#  define GL_OUTPUT_TEXTURE_COORD19_EXT 0x87B0
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD20_EXT
#  define GL_OUTPUT_TEXTURE_COORD20_EXT 0x87B1
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD21_EXT
#  define GL_OUTPUT_TEXTURE_COORD21_EXT 0x87B2
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD22_EXT
#  define GL_OUTPUT_TEXTURE_COORD22_EXT 0x87B3
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD23_EXT
#  define GL_OUTPUT_TEXTURE_COORD23_EXT 0x87B4
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD24_EXT
#  define GL_OUTPUT_TEXTURE_COORD24_EXT 0x87B5
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD25_EXT
#  define GL_OUTPUT_TEXTURE_COORD25_EXT 0x87B6
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD26_EXT
#  define GL_OUTPUT_TEXTURE_COORD26_EXT 0x87B7
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD27_EXT
#  define GL_OUTPUT_TEXTURE_COORD27_EXT 0x87B8
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD28_EXT
#  define GL_OUTPUT_TEXTURE_COORD28_EXT 0x87B9
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD29_EXT
#  define GL_OUTPUT_TEXTURE_COORD29_EXT 0x87BA
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD30_EXT
#  define GL_OUTPUT_TEXTURE_COORD30_EXT 0x87BB
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD31_EXT
#  define GL_OUTPUT_TEXTURE_COORD31_EXT 0x87BC
#endif
#ifndef GL_OUTPUT_FOG_EXT
#  define GL_OUTPUT_FOG_EXT 0x87BD
#endif
#ifndef GL_SCALAR_EXT
#  define GL_SCALAR_EXT 0x87BE
#endif
#ifndef GL_VECTOR_EXT
#  define GL_VECTOR_EXT 0x87BF
#endif
#ifndef GL_MATRIX_EXT
#  define GL_MATRIX_EXT 0x87C0
#endif
#ifndef GL_VARIANT_EXT
#  define GL_VARIANT_EXT 0x87C1
#endif
#ifndef GL_INVARIANT_EXT
#  define GL_INVARIANT_EXT 0x87C2
#endif
#ifndef GL_LOCAL_CONSTANT_EXT
#  define GL_LOCAL_CONSTANT_EXT 0x87C3
#endif
#ifndef GL_LOCAL_EXT
#  define GL_LOCAL_EXT 0x87C4
#endif
#ifndef GL_MAX_VERTEX_SHADER_INSTRUCTIONS_EXT
#  define GL_MAX_VERTEX_SHADER_INSTRUCTIONS_EXT 0x87C5
#endif
#ifndef GL_MAX_VERTEX_SHADER_VARIANTS_EXT
#  define GL_MAX_VERTEX_SHADER_VARIANTS_EXT 0x87C6
#endif
#ifndef GL_MAX_VERTEX_SHADER_INVARIANTS_EXT
#  define GL_MAX_VERTEX_SHADER_INVARIANTS_EXT 0x87C7
#endif
#ifndef GL_MAX_VERTEX_SHADER_LOCAL_CONSTANTS_EXT
#  define GL_MAX_VERTEX_SHADER_LOCAL_CONSTANTS_EXT 0x87C8
#endif
#ifndef GL_MAX_VERTEX_SHADER_LOCALS_EXT
#  define GL_MAX_VERTEX_SHADER_LOCALS_EXT 0x87C9
#endif
#ifndef GL_MAX_OPTIMIZED_VERTEX_SHADER_INSTRUCTIONS_EXT
#  define GL_MAX_OPTIMIZED_VERTEX_SHADER_INSTRUCTIONS_EXT 0x87CA
#endif
#ifndef GL_MAX_OPTIMIZED_VERTEX_SHADER_VARIANTS_EXT
#  define GL_MAX_OPTIMIZED_VERTEX_SHADER_VARIANTS_EXT 0x87CB
#endif
#ifndef GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCAL_CONSTANTS_EXT
#  define GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCAL_CONSTANTS_EXT 0x87CC
#endif
#ifndef GL_MAX_OPTIMIZED_VERTEX_SHADER_INVARIANTS_EXT
#  define GL_MAX_OPTIMIZED_VERTEX_SHADER_INVARIANTS_EXT 0x87CD
#endif
#ifndef GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCALS_EXT
#  define GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCALS_EXT 0x87CE
#endif
#ifndef GL_VERTEX_SHADER_INSTRUCTIONS_EXT
#  define GL_VERTEX_SHADER_INSTRUCTIONS_EXT 0x87CF
#endif
#ifndef GL_VERTEX_SHADER_VARIANTS_EXT
#  define GL_VERTEX_SHADER_VARIANTS_EXT 0x87D0
#endif
#ifndef GL_VERTEX_SHADER_INVARIANTS_EXT
#  define GL_VERTEX_SHADER_INVARIANTS_EXT 0x87D1
#endif
#ifndef GL_VERTEX_SHADER_LOCAL_CONSTANTS_EXT
#  define GL_VERTEX_SHADER_LOCAL_CONSTANTS_EXT 0x87D2
#endif
#ifndef GL_VERTEX_SHADER_LOCALS_EXT
#  define GL_VERTEX_SHADER_LOCALS_EXT 0x87D3
#endif
#ifndef GL_VERTEX_SHADER_OPTIMIZED_EXT
#  define GL_VERTEX_SHADER_OPTIMIZED_EXT 0x87D4
#endif
#ifndef GL_X_EXT
#  define GL_X_EXT 0x87D5
#endif
#ifndef GL_Y_EXT
#  define GL_Y_EXT 0x87D6
#endif
#ifndef GL_Z_EXT
#  define GL_Z_EXT 0x87D7
#endif
#ifndef GL_W_EXT
#  define GL_W_EXT 0x87D8
#endif
#ifndef GL_NEGATIVE_X_EXT
#  define GL_NEGATIVE_X_EXT 0x87D9
#endif
#ifndef GL_NEGATIVE_Y_EXT
#  define GL_NEGATIVE_Y_EXT 0x87DA
#endif
#ifndef GL_NEGATIVE_Z_EXT
#  define GL_NEGATIVE_Z_EXT 0x87DB
#endif
#ifndef GL_NEGATIVE_W_EXT
#  define GL_NEGATIVE_W_EXT 0x87DC
#endif
#ifndef GL_ZERO_EXT
#  define GL_ZERO_EXT 0x87DD
#endif
#ifndef GL_ONE_EXT
#  define GL_ONE_EXT 0x87DE
#endif
#ifndef GL_NEGATIVE_ONE_EXT
#  define GL_NEGATIVE_ONE_EXT 0x87DF
#endif
#ifndef GL_NORMALIZED_RANGE_EXT
#  define GL_NORMALIZED_RANGE_EXT 0x87E0
#endif
#ifndef GL_FULL_RANGE_EXT
#  define GL_FULL_RANGE_EXT 0x87E1
#endif
#ifndef GL_CURRENT_VERTEX_EXT
#  define GL_CURRENT_VERTEX_EXT 0x87E2
#endif
#ifndef GL_MVP_MATRIX_EXT
#  define GL_MVP_MATRIX_EXT 0x87E3
#endif
#ifndef GL_VARIANT_VALUE_EXT
#  define GL_VARIANT_VALUE_EXT 0x87E4
#endif
#ifndef GL_VARIANT_DATATYPE_EXT
#  define GL_VARIANT_DATATYPE_EXT 0x87E5
#endif
#ifndef GL_VARIANT_ARRAY_STRIDE_EXT
#  define GL_VARIANT_ARRAY_STRIDE_EXT 0x87E6
#endif
#ifndef GL_VARIANT_ARRAY_TYPE_EXT
#  define GL_VARIANT_ARRAY_TYPE_EXT 0x87E7
#endif
#ifndef GL_VARIANT_ARRAY_EXT
#  define GL_VARIANT_ARRAY_EXT 0x87E8
#endif
#ifndef GL_VARIANT_ARRAY_POINTER_EXT
#  define GL_VARIANT_ARRAY_POINTER_EXT 0x87E9
#endif
#ifndef GL_INVARIANT_VALUE_EXT
#  define GL_INVARIANT_VALUE_EXT 0x87EA
#endif
#ifndef GL_INVARIANT_DATATYPE_EXT
#  define GL_INVARIANT_DATATYPE_EXT 0x87EB
#endif
#ifndef GL_LOCAL_CONSTANT_VALUE_EXT
#  define GL_LOCAL_CONSTANT_VALUE_EXT 0x87EC
#endif
#ifndef GL_LOCAL_CONSTANT_DATATYPE_EXT
#  define GL_LOCAL_CONSTANT_DATATYPE_EXT 0x87ED
#endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glBeginVertexShaderEXT
typedef void (APIENTRYP PFNGLUXBEGINVERTEXSHADEREXTPROC) (void);
#endif
#ifndef __GLUX__GLFCT_glEndVertexShaderEXT
typedef void (APIENTRYP PFNGLUXENDVERTEXSHADEREXTPROC) (void);
#endif
#ifndef __GLUX__GLFCT_glBindVertexShaderEXT
typedef void (APIENTRYP PFNGLUXBINDVERTEXSHADEREXTPROC) (GLuint id);
#endif
#ifndef __GLUX__GLFCT_glGenVertexShadersEXT
typedef GLuint (APIENTRYP PFNGLUXGENVERTEXSHADERSEXTPROC) (GLuint range);
#endif
#ifndef __GLUX__GLFCT_glDeleteVertexShaderEXT
typedef void (APIENTRYP PFNGLUXDELETEVERTEXSHADEREXTPROC) (GLuint id);
#endif
#ifndef __GLUX__GLFCT_glShaderOp1EXT
typedef void (APIENTRYP PFNGLUXSHADEROP1EXTPROC) (GLenum op, GLuint res, GLuint arg1);
#endif
#ifndef __GLUX__GLFCT_glShaderOp2EXT
typedef void (APIENTRYP PFNGLUXSHADEROP2EXTPROC) (GLenum op, GLuint res, GLuint arg1, GLuint arg2);
#endif
#ifndef __GLUX__GLFCT_glShaderOp3EXT
typedef void (APIENTRYP PFNGLUXSHADEROP3EXTPROC) (GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3);
#endif
#ifndef __GLUX__GLFCT_glSwizzleEXT
typedef void (APIENTRYP PFNGLUXSWIZZLEEXTPROC) (GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW);
#endif
#ifndef __GLUX__GLFCT_glWriteMaskEXT
typedef void (APIENTRYP PFNGLUXWRITEMASKEXTPROC) (GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW);
#endif
#ifndef __GLUX__GLFCT_glInsertComponentEXT
typedef void (APIENTRYP PFNGLUXINSERTCOMPONENTEXTPROC) (GLuint res, GLuint src, GLuint num);
#endif
#ifndef __GLUX__GLFCT_glExtractComponentEXT
typedef void (APIENTRYP PFNGLUXEXTRACTCOMPONENTEXTPROC) (GLuint res, GLuint src, GLuint num);
#endif
#ifndef __GLUX__GLFCT_glGenSymbolsEXT
typedef GLuint (APIENTRYP PFNGLUXGENSYMBOLSEXTPROC) (GLenum datatype, GLenum storagetype, GLenum range, GLuint components);
#endif
#ifndef __GLUX__GLFCT_glSetInvariantEXT
typedef void (APIENTRYP PFNGLUXSETINVARIANTEXTPROC) (GLuint id, GLenum type, const GLvoid *addr);
#endif
#ifndef __GLUX__GLFCT_glSetLocalConstantEXT
typedef void (APIENTRYP PFNGLUXSETLOCALCONSTANTEXTPROC) (GLuint id, GLenum type, const GLvoid *addr);
#endif
#ifndef __GLUX__GLFCT_glVariantbvEXT
typedef void (APIENTRYP PFNGLUXVARIANTBVEXTPROC) (GLuint id, const GLbyte *addr);
#endif
#ifndef __GLUX__GLFCT_glVariantsvEXT
typedef void (APIENTRYP PFNGLUXVARIANTSVEXTPROC) (GLuint id, const GLshort *addr);
#endif
#ifndef __GLUX__GLFCT_glVariantivEXT
typedef void (APIENTRYP PFNGLUXVARIANTIVEXTPROC) (GLuint id, const GLint *addr);
#endif
#ifndef __GLUX__GLFCT_glVariantfvEXT
typedef void (APIENTRYP PFNGLUXVARIANTFVEXTPROC) (GLuint id, const GLfloat *addr);
#endif
#ifndef __GLUX__GLFCT_glVariantdvEXT
typedef void (APIENTRYP PFNGLUXVARIANTDVEXTPROC) (GLuint id, const GLdouble *addr);
#endif
#ifndef __GLUX__GLFCT_glVariantubvEXT
typedef void (APIENTRYP PFNGLUXVARIANTUBVEXTPROC) (GLuint id, const GLubyte *addr);
#endif
#ifndef __GLUX__GLFCT_glVariantusvEXT
typedef void (APIENTRYP PFNGLUXVARIANTUSVEXTPROC) (GLuint id, const GLushort *addr);
#endif
#ifndef __GLUX__GLFCT_glVariantuivEXT
typedef void (APIENTRYP PFNGLUXVARIANTUIVEXTPROC) (GLuint id, const GLuint *addr);
#endif
#ifndef __GLUX__GLFCT_glVariantPointerEXT
typedef void (APIENTRYP PFNGLUXVARIANTPOINTEREXTPROC) (GLuint id, GLenum type, GLuint stride, const GLvoid *addr);
#endif
#ifndef __GLUX__GLFCT_glEnableVariantClientStateEXT
typedef void (APIENTRYP PFNGLUXENABLEVARIANTCLIENTSTATEEXTPROC) (GLuint id);
#endif
#ifndef __GLUX__GLFCT_glDisableVariantClientStateEXT
typedef void (APIENTRYP PFNGLUXDISABLEVARIANTCLIENTSTATEEXTPROC) (GLuint id);
#endif
#ifndef __GLUX__GLFCT_glBindLightParameterEXT
typedef GLuint (APIENTRYP PFNGLUXBINDLIGHTPARAMETEREXTPROC) (GLenum light, GLenum value);
#endif
#ifndef __GLUX__GLFCT_glBindMaterialParameterEXT
typedef GLuint (APIENTRYP PFNGLUXBINDMATERIALPARAMETEREXTPROC) (GLenum face, GLenum value);
#endif
#ifndef __GLUX__GLFCT_glBindTexGenParameterEXT
typedef GLuint (APIENTRYP PFNGLUXBINDTEXGENPARAMETEREXTPROC) (GLenum unit, GLenum coord, GLenum value);
#endif
#ifndef __GLUX__GLFCT_glBindTextureUnitParameterEXT
typedef GLuint (APIENTRYP PFNGLUXBINDTEXTUREUNITPARAMETEREXTPROC) (GLenum unit, GLenum value);
#endif
#ifndef __GLUX__GLFCT_glBindParameterEXT
typedef GLuint (APIENTRYP PFNGLUXBINDPARAMETEREXTPROC) (GLenum value);
#endif
#ifndef __GLUX__GLFCT_glIsVariantEnabledEXT
typedef GLboolean (APIENTRYP PFNGLUXISVARIANTENABLEDEXTPROC) (GLuint id, GLenum cap);
#endif
#ifndef __GLUX__GLFCT_glGetVariantBooleanvEXT
typedef void (APIENTRYP PFNGLUXGETVARIANTBOOLEANVEXTPROC) (GLuint id, GLenum value, GLboolean *data);
#endif
#ifndef __GLUX__GLFCT_glGetVariantIntegervEXT
typedef void (APIENTRYP PFNGLUXGETVARIANTINTEGERVEXTPROC) (GLuint id, GLenum value, GLint *data);
#endif
#ifndef __GLUX__GLFCT_glGetVariantFloatvEXT
typedef void (APIENTRYP PFNGLUXGETVARIANTFLOATVEXTPROC) (GLuint id, GLenum value, GLfloat *data);
#endif
#ifndef __GLUX__GLFCT_glGetVariantPointervEXT
typedef void (APIENTRYP PFNGLUXGETVARIANTPOINTERVEXTPROC) (GLuint id, GLenum value, GLvoid* *data);
#endif
#ifndef __GLUX__GLFCT_glGetInvariantBooleanvEXT
typedef void (APIENTRYP PFNGLUXGETINVARIANTBOOLEANVEXTPROC) (GLuint id, GLenum value, GLboolean *data);
#endif
#ifndef __GLUX__GLFCT_glGetInvariantIntegervEXT
typedef void (APIENTRYP PFNGLUXGETINVARIANTINTEGERVEXTPROC) (GLuint id, GLenum value, GLint *data);
#endif
#ifndef __GLUX__GLFCT_glGetInvariantFloatvEXT
typedef void (APIENTRYP PFNGLUXGETINVARIANTFLOATVEXTPROC) (GLuint id, GLenum value, GLfloat *data);
#endif
#ifndef __GLUX__GLFCT_glGetLocalConstantBooleanvEXT
typedef void (APIENTRYP PFNGLUXGETLOCALCONSTANTBOOLEANVEXTPROC) (GLuint id, GLenum value, GLboolean *data);
#endif
#ifndef __GLUX__GLFCT_glGetLocalConstantIntegervEXT
typedef void (APIENTRYP PFNGLUXGETLOCALCONSTANTINTEGERVEXTPROC) (GLuint id, GLenum value, GLint *data);
#endif
#ifndef __GLUX__GLFCT_glGetLocalConstantFloatvEXT
typedef void (APIENTRYP PFNGLUXGETLOCALCONSTANTFLOATVEXTPROC) (GLuint id, GLenum value, GLfloat *data);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glBeginVertexShaderEXT
extern PFNGLUXBEGINVERTEXSHADEREXTPROC glBeginVertexShaderEXT;
#endif
#ifndef __GLUX__GLFCT_glEndVertexShaderEXT
extern PFNGLUXENDVERTEXSHADEREXTPROC glEndVertexShaderEXT;
#endif
#ifndef __GLUX__GLFCT_glBindVertexShaderEXT
extern PFNGLUXBINDVERTEXSHADEREXTPROC glBindVertexShaderEXT;
#endif
#ifndef __GLUX__GLFCT_glGenVertexShadersEXT
extern PFNGLUXGENVERTEXSHADERSEXTPROC glGenVertexShadersEXT;
#endif
#ifndef __GLUX__GLFCT_glDeleteVertexShaderEXT
extern PFNGLUXDELETEVERTEXSHADEREXTPROC glDeleteVertexShaderEXT;
#endif
#ifndef __GLUX__GLFCT_glShaderOp1EXT
extern PFNGLUXSHADEROP1EXTPROC glShaderOp1EXT;
#endif
#ifndef __GLUX__GLFCT_glShaderOp2EXT
extern PFNGLUXSHADEROP2EXTPROC glShaderOp2EXT;
#endif
#ifndef __GLUX__GLFCT_glShaderOp3EXT
extern PFNGLUXSHADEROP3EXTPROC glShaderOp3EXT;
#endif
#ifndef __GLUX__GLFCT_glSwizzleEXT
extern PFNGLUXSWIZZLEEXTPROC glSwizzleEXT;
#endif
#ifndef __GLUX__GLFCT_glWriteMaskEXT
extern PFNGLUXWRITEMASKEXTPROC glWriteMaskEXT;
#endif
#ifndef __GLUX__GLFCT_glInsertComponentEXT
extern PFNGLUXINSERTCOMPONENTEXTPROC glInsertComponentEXT;
#endif
#ifndef __GLUX__GLFCT_glExtractComponentEXT
extern PFNGLUXEXTRACTCOMPONENTEXTPROC glExtractComponentEXT;
#endif
#ifndef __GLUX__GLFCT_glGenSymbolsEXT
extern PFNGLUXGENSYMBOLSEXTPROC glGenSymbolsEXT;
#endif
#ifndef __GLUX__GLFCT_glSetInvariantEXT
extern PFNGLUXSETINVARIANTEXTPROC glSetInvariantEXT;
#endif
#ifndef __GLUX__GLFCT_glSetLocalConstantEXT
extern PFNGLUXSETLOCALCONSTANTEXTPROC glSetLocalConstantEXT;
#endif
#ifndef __GLUX__GLFCT_glVariantbvEXT
extern PFNGLUXVARIANTBVEXTPROC glVariantbvEXT;
#endif
#ifndef __GLUX__GLFCT_glVariantsvEXT
extern PFNGLUXVARIANTSVEXTPROC glVariantsvEXT;
#endif
#ifndef __GLUX__GLFCT_glVariantivEXT
extern PFNGLUXVARIANTIVEXTPROC glVariantivEXT;
#endif
#ifndef __GLUX__GLFCT_glVariantfvEXT
extern PFNGLUXVARIANTFVEXTPROC glVariantfvEXT;
#endif
#ifndef __GLUX__GLFCT_glVariantdvEXT
extern PFNGLUXVARIANTDVEXTPROC glVariantdvEXT;
#endif
#ifndef __GLUX__GLFCT_glVariantubvEXT
extern PFNGLUXVARIANTUBVEXTPROC glVariantubvEXT;
#endif
#ifndef __GLUX__GLFCT_glVariantusvEXT
extern PFNGLUXVARIANTUSVEXTPROC glVariantusvEXT;
#endif
#ifndef __GLUX__GLFCT_glVariantuivEXT
extern PFNGLUXVARIANTUIVEXTPROC glVariantuivEXT;
#endif
#ifndef __GLUX__GLFCT_glVariantPointerEXT
extern PFNGLUXVARIANTPOINTEREXTPROC glVariantPointerEXT;
#endif
#ifndef __GLUX__GLFCT_glEnableVariantClientStateEXT
extern PFNGLUXENABLEVARIANTCLIENTSTATEEXTPROC glEnableVariantClientStateEXT;
#endif
#ifndef __GLUX__GLFCT_glDisableVariantClientStateEXT
extern PFNGLUXDISABLEVARIANTCLIENTSTATEEXTPROC glDisableVariantClientStateEXT;
#endif
#ifndef __GLUX__GLFCT_glBindLightParameterEXT
extern PFNGLUXBINDLIGHTPARAMETEREXTPROC glBindLightParameterEXT;
#endif
#ifndef __GLUX__GLFCT_glBindMaterialParameterEXT
extern PFNGLUXBINDMATERIALPARAMETEREXTPROC glBindMaterialParameterEXT;
#endif
#ifndef __GLUX__GLFCT_glBindTexGenParameterEXT
extern PFNGLUXBINDTEXGENPARAMETEREXTPROC glBindTexGenParameterEXT;
#endif
#ifndef __GLUX__GLFCT_glBindTextureUnitParameterEXT
extern PFNGLUXBINDTEXTUREUNITPARAMETEREXTPROC glBindTextureUnitParameterEXT;
#endif
#ifndef __GLUX__GLFCT_glBindParameterEXT
extern PFNGLUXBINDPARAMETEREXTPROC glBindParameterEXT;
#endif
#ifndef __GLUX__GLFCT_glIsVariantEnabledEXT
extern PFNGLUXISVARIANTENABLEDEXTPROC glIsVariantEnabledEXT;
#endif
#ifndef __GLUX__GLFCT_glGetVariantBooleanvEXT
extern PFNGLUXGETVARIANTBOOLEANVEXTPROC glGetVariantBooleanvEXT;
#endif
#ifndef __GLUX__GLFCT_glGetVariantIntegervEXT
extern PFNGLUXGETVARIANTINTEGERVEXTPROC glGetVariantIntegervEXT;
#endif
#ifndef __GLUX__GLFCT_glGetVariantFloatvEXT
extern PFNGLUXGETVARIANTFLOATVEXTPROC glGetVariantFloatvEXT;
#endif
#ifndef __GLUX__GLFCT_glGetVariantPointervEXT
extern PFNGLUXGETVARIANTPOINTERVEXTPROC glGetVariantPointervEXT;
#endif
#ifndef __GLUX__GLFCT_glGetInvariantBooleanvEXT
extern PFNGLUXGETINVARIANTBOOLEANVEXTPROC glGetInvariantBooleanvEXT;
#endif
#ifndef __GLUX__GLFCT_glGetInvariantIntegervEXT
extern PFNGLUXGETINVARIANTINTEGERVEXTPROC glGetInvariantIntegervEXT;
#endif
#ifndef __GLUX__GLFCT_glGetInvariantFloatvEXT
extern PFNGLUXGETINVARIANTFLOATVEXTPROC glGetInvariantFloatvEXT;
#endif
#ifndef __GLUX__GLFCT_glGetLocalConstantBooleanvEXT
extern PFNGLUXGETLOCALCONSTANTBOOLEANVEXTPROC glGetLocalConstantBooleanvEXT;
#endif
#ifndef __GLUX__GLFCT_glGetLocalConstantIntegervEXT
extern PFNGLUXGETLOCALCONSTANTINTEGERVEXTPROC glGetLocalConstantIntegervEXT;
#endif
#ifndef __GLUX__GLFCT_glGetLocalConstantFloatvEXT
extern PFNGLUXGETLOCALCONSTANTFLOATVEXTPROC glGetLocalConstantFloatvEXT;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------