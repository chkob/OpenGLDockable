
// OpenGLDockableOrdinaryStyleView.cpp : implementation of the COpenGLDockableOrdinaryStyleView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "OpenGLDockableOrdinaryStyle.h"
#endif

#include "OpenGLDockableOrdinaryStyleDoc.h"
#include "OpenGLDockableOrdinaryStyleView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// COpenGLDockableOrdinaryStyleView

IMPLEMENT_DYNCREATE(COpenGLDockableOrdinaryStyleView, CView)

BEGIN_MESSAGE_MAP(COpenGLDockableOrdinaryStyleView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// COpenGLDockableOrdinaryStyleView construction/destruction

COpenGLDockableOrdinaryStyleView::COpenGLDockableOrdinaryStyleView()
{
	// TODO: add construction code here

}

COpenGLDockableOrdinaryStyleView::~COpenGLDockableOrdinaryStyleView()
{
}

BOOL COpenGLDockableOrdinaryStyleView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// COpenGLDockableOrdinaryStyleView drawing

void COpenGLDockableOrdinaryStyleView::OnDraw(CDC* /*pDC*/)
{
	COpenGLDockableOrdinaryStyleDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// COpenGLDockableOrdinaryStyleView printing

BOOL COpenGLDockableOrdinaryStyleView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void COpenGLDockableOrdinaryStyleView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void COpenGLDockableOrdinaryStyleView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// COpenGLDockableOrdinaryStyleView diagnostics

#ifdef _DEBUG
void COpenGLDockableOrdinaryStyleView::AssertValid() const
{
	CView::AssertValid();
}

void COpenGLDockableOrdinaryStyleView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

COpenGLDockableOrdinaryStyleDoc* COpenGLDockableOrdinaryStyleView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(COpenGLDockableOrdinaryStyleDoc)));
	return (COpenGLDockableOrdinaryStyleDoc*)m_pDocument;
}
#endif //_DEBUG


// COpenGLDockableOrdinaryStyleView message handlers
