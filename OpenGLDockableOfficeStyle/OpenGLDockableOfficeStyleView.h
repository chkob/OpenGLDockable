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

// OpenGLDockableOfficeStyleView.h : interface of the COpenGLDockableOfficeStyleView class
//

#pragma once


class COpenGLDockableOfficeStyleView : public CView
{
protected: // create from serialization only
	COpenGLDockableOfficeStyleView();
	DECLARE_DYNCREATE(COpenGLDockableOfficeStyleView)

// Attributes
public:
	COpenGLDockableOfficeStyleDoc* GetDocument() const;

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
	virtual ~COpenGLDockableOfficeStyleView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in OpenGLDockableOfficeStyleView.cpp
inline COpenGLDockableOfficeStyleDoc* COpenGLDockableOfficeStyleView::GetDocument() const
   { return reinterpret_cast<COpenGLDockableOfficeStyleDoc*>(m_pDocument); }
#endif

