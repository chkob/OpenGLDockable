
// OpenGLDockableView.cpp : implementation of the COpenGLDockableView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "OpenGLDockable.h"
#endif

#include "OpenGLDockableDoc.h"
#include "OpenGLDockableView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// COpenGLDockableView

IMPLEMENT_DYNCREATE(COpenGLDockableView, CView)

BEGIN_MESSAGE_MAP(COpenGLDockableView, CView)
   // Standard printing commands
   ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
   ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
   ON_COMMAND(ID_FILE_PRINT_PREVIEW, &COpenGLDockableView::OnFilePrintPreview)
   ON_WM_CONTEXTMENU()
   ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// COpenGLDockableView construction/destruction

COpenGLDockableView::COpenGLDockableView()
{
   // TODO: add construction code here

}

COpenGLDockableView::~COpenGLDockableView()
{
}

BOOL COpenGLDockableView::PreCreateWindow(CREATESTRUCT& cs)
{
   // TODO: Modify the Window class or styles here by modifying
   //  the CREATESTRUCT cs

   return CView::PreCreateWindow(cs);
}

// COpenGLDockableView drawing

void COpenGLDockableView::OnDraw(CDC* /*pDC*/)
{
   COpenGLDockableDoc* pDoc = GetDocument();
   ASSERT_VALID(pDoc);
   if (!pDoc)
      return;

   // TODO: add draw code for native data here
}


// COpenGLDockableView printing


void COpenGLDockableView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
   AFXPrintPreview(this);
#endif
}

BOOL COpenGLDockableView::OnPreparePrinting(CPrintInfo* pInfo)
{
   // default preparation
   return DoPreparePrinting(pInfo);
}

void COpenGLDockableView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
   // TODO: add extra initialization before printing
}

void COpenGLDockableView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
   // TODO: add cleanup after printing
}

void COpenGLDockableView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
   ClientToScreen(&point);
   OnContextMenu(this, point);
}

void COpenGLDockableView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
   theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// COpenGLDockableView diagnostics

#ifdef _DEBUG
void COpenGLDockableView::AssertValid() const
{
   CView::AssertValid();
}

void COpenGLDockableView::Dump(CDumpContext& dc) const
{
   CView::Dump(dc);
}

COpenGLDockableDoc* COpenGLDockableView::GetDocument() const // non-debug version is inline
{
   ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(COpenGLDockableDoc)));
   return (COpenGLDockableDoc*)m_pDocument;
}
#endif //_DEBUG


// COpenGLDockableView message handlers
