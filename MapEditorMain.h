/***************************************************************
 * Name:      MapEditorMain.h
 * Purpose:   Defines Application Frame
 * Author:    gaotengfei (500yearslater@gmail.com)
 * Created:   2018-06-27
 * Copyright: gaotengfei ()
 * License:
 **************************************************************/

#ifndef MAPEDITORMAIN_H
#define MAPEDITORMAIN_H

//(*Headers(MapEditorFrame)
#include <wx/menu.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
//*)

class MapEditorFrame: public wxFrame
{
    public:

        MapEditorFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~MapEditorFrame();

    private:

        //(*Handlers(MapEditorFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(MapEditorFrame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(MapEditorFrame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // MAPEDITORMAIN_H
