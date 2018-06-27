/***************************************************************
 * Name:      MapEditorApp.cpp
 * Purpose:   Code for Application Class
 * Author:    gaotengfei (500yearslater@gmail.com)
 * Created:   2018-06-27
 * Copyright: gaotengfei ()
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "MapEditorApp.h"

//(*AppHeaders
#include "MapEditorMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(MapEditorApp);

bool MapEditorApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	MapEditorFrame* Frame = new MapEditorFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
