//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this source code is subject to the terms of the Microsoft shared
// source or premium shared source license agreement under which you licensed
// this source code. If you did not accept the terms of the license agreement,
// you are not authorized to use this source code. For the terms of the license,
// please see the license agreement between you and Microsoft or, if applicable,
// see the SOURCE.RTF on your install media or the root of your tools installation.
// THE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES OR INDEMNITIES.
//

#pragma once

#include <atlcomcli.h>
#include <streams.h>

namespace RenderMpeg2TransportStream
{

class Graph
{
public:
    Graph( );
    HRESULT RenderFile( IGraphBuilder* pGraph, const wchar_t* wszFile );

private:
    // disable copy ctor and assignment
    Graph( const Graph& );
    Graph& operator=( const Graph& );

    HRESULT GetMpeg2DemuxFilter_( CComPtr< IBaseFilter >& rspMpeg2Demux );
    HRESULT FindMpeg2TransportStreamDemuxOnGraph_( CComPtr< IBaseFilter >& rspFound );

    CComPtr< IGraphBuilder > m_spGraph;
};

}

