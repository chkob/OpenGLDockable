// This MFC Samples source code demonstrates using MFC Microsoft Office Fluent User Interface 
// (the "Fluent UI") and is provided only as referential material to supplement the 
// Microsoft Foundation Classes Reference and related electronic documentation 
// included with the MFC C++ library software.  
// License terms to copy, use or distribute the Fluent UI are available separately.  
// To learn more about our Fluent UI licensing program, please visit 
// http://msdn.microsoft.com/officeui.
//
// Copyright (C) Microsoft Corporation
// All rights reserved.

// OpenGLDockableOfficeStyleView.cpp : implementation of the COpenGLDockableOfficeStyleView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "OpenGLDockableOfficeStyle.h"
#endif

#include "OpenGLDockableOfficeStyleDoc.h"
#include "OpenGLDockableOfficeStyleView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// COpenGLDockableOfficeStyleView

IMPLEMENT_DYNCREATE(COpenGLDockableOfficeStyleView, CView)

BEGIN_MESSAGE_MAP(COpenGLDockableOfficeStyleView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &COpenGLDockableOfficeStyleView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// COpenGLDockableOfficeStyleView construction/destruction

COpenGLDockableOfficeStyleView::COpenGLDockableOfficeStyleView()
{
	// TODO: add construction code here

}

COpenGLDockableOfficeStyleView::~COpenGLDockableOfficeStyleView()
{
}

BOOL COpenGLDockableOfficeStyleView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// COpenGLDockableOfficeStyleView drawing

void COpenGLDockableOfficeStyleView::OnDraw(CDC* /*pDC*/)
{
	COpenGLDockableOfficeStyleDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// COpenGLDockableOfficeStyleView printing


void COpenGLDockableOfficeStyleView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL COpenGLDockableOfficeStyleView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void COpenGLDockableOfficeStyleView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void COpenGLDockableOfficeStyleView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void COpenGLDockableOfficeStyleView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void COpenGLDockableOfficeStyleView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// COpenGLDockableOfficeStyleView diagnostics

#ifdef _DEBUG
void COpenGLDockableOfficeStyleView::AssertValid() const
{
	CView::AssertValid();
}

void COpenGLDockableOfficeStyleView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

COpenGLDockableOfficeStyleDoc* COpenGLDockableOfficeStyleView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(COpenGLDockableOfficeStyleDoc)));
	return (COpenGLDockableOfficeStyleDoc*)m_pDocument;
}
#endif //_DEBUG


// COpenGLDockableOfficeStyleView message handlers
