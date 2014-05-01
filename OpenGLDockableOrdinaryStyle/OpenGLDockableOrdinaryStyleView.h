
// OpenGLDockableOrdinaryStyleView.h : interface of the COpenGLDockableOrdinaryStyleView class
//

#pragma once


class COpenGLDockableOrdinaryStyleView : public CView
{
protected: // create from serialization only
   COpenGLDockableOrdinaryStyleView();
   DECLARE_DYNCREATE(COpenGLDockableOrdinaryStyleView)

   // Attributes
public:
   COpenGLDockableOrdinaryStyleDoc* GetDocument() const;

   // Operations
public:

   // Overrides
public:
   virtual void OnDraw(CDC* pDC);  // overridden to draw this view
   virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
   virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
   virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
   virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

   // Implementation
public:
   virtual ~COpenGLDockableOrdinaryStyleView();
#ifdef _DEBUG
   virtual void AssertValid() const;
   virtual void Dump(CDumpContext& dc) const;
#endif

protected:

   // Generated message map functions
protected:
   DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in OpenGLDockableOrdinaryStyleView.cpp
inline COpenGLDockableOrdinaryStyleDoc* COpenGLDockableOrdinaryStyleView::GetDocument() const
{ return reinterpret_cast<COpenGLDockableOrdinaryStyleDoc*>(m_pDocument); }
#endif

