/*
 *  .file oglplus/enums/ext/nv_path_dash_offset_reset_range.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/oglplus/ext/nv_path_dash_offset_reset.txt' instead.
 *
 *  Copyright 2010-2013 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

namespace enums {
OGLPLUS_LIB_FUNC aux::CastIterRange<
	const GLenum*,
	PathNVDashOffsetReset
> ValueRange_(PathNVDashOffsetReset*)
#if (!OGLPLUS_LINK_LIBRARY || defined(OGLPLUS_IMPLEMENTING_LIBRARY)) && \
	!defined(OGLPLUS_IMPL_EVR_PATHNVDASHOFFSETRESET)
#define OGLPLUS_IMPL_EVR_PATHNVDASHOFFSETRESET
{
static const GLenum _values[] = {
#if defined GL_MOVE_TO_RESET_NV
GL_MOVE_TO_RESET_NV,
#endif
#if defined GL_MOVE_TO_CONTINUES_NV
GL_MOVE_TO_CONTINUES_NV,
#endif
0
};
return aux::CastIterRange<
	const GLenum*,
	PathNVDashOffsetReset
>(_values, _values+sizeof(_values)/sizeof(_values[0])-1);
}
#else
;
#endif
} // namespace enums

