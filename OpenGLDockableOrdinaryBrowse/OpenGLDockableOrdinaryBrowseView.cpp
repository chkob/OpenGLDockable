
// OpenGLDockableOrdinaryBrowseView.cpp : implementation of the COpenGLDockableOrdinaryBrowseView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "OpenGLDockableOrdinaryBrowse.h"
#endif

#include "OpenGLDockableOrdinaryBrowseDoc.h"
#include "OpenGLDockableOrdinaryBrowseView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// COpenGLDockableOrdinaryBrowseView

IMPLEMENT_DYNCREATE(COpenGLDockableOrdinaryBrowseView, CListView)

BEGIN_MESSAGE_MAP(COpenGLDockableOrdinaryBrowseView, CListView)
	ON_WM_STYLECHANGED()
END_MESSAGE_MAP()

// COpenGLDockableOrdinaryBrowseView construction/destruction

COpenGLDockableOrdinaryBrowseView::COpenGLDockableOrdinaryBrowseView()
{
	// TODO: add construction code here

}

COpenGLDockableOrdinaryBrowseView::~COpenGLDockableOrdinaryBrowseView()
{
}

BOOL COpenGLDockableOrdinaryBrowseView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CListView::PreCreateWindow(cs);
}

void COpenGLDockableOrdinaryBrowseView::OnInitialUpdate()
{
	CListView::OnInitialUpdate();


	// TODO: You may populate your ListView with items by directly accessing
	//  its list control through a call to GetListCtrl().
}


// COpenGLDockableOrdinaryBrowseView diagnostics

#ifdef _DEBUG
void COpenGLDockableOrdinaryBrowseView::AssertValid() const
{
	CListView::AssertValid();
}

void COpenGLDockableOrdinaryBrowseView::Dump(CDumpContext& dc) const
{
	CListView::Dump(dc);
}

COpenGLDockableOrdinaryBrowseDoc* COpenGLDockableOrdinaryBrowseView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(COpenGLDockableOrdinaryBrowseDoc)));
	return (COpenGLDockableOrdinaryBrowseDoc*)m_pDocument;
}
#endif //_DEBUG


// COpenGLDockableOrdinaryBrowseView message handlers
void COpenGLDockableOrdinaryBrowseView::OnStyleChanged(int nStyleType, LPSTYLESTRUCT lpStyleStruct)
{
	//TODO: add code to react to the user changing the view style of your window	
	CListView::OnStyleChanged(nStyleType,lpStyleStruct);	
}
