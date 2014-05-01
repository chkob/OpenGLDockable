
// OpenGLDockableOrdinaryBrowseView.h : interface of the COpenGLDockableOrdinaryBrowseView class
//

#pragma once


class COpenGLDockableOrdinaryBrowseView : public CListView
{
protected: // create from serialization only
	COpenGLDockableOrdinaryBrowseView();
	DECLARE_DYNCREATE(COpenGLDockableOrdinaryBrowseView)

// Attributes
public:
	COpenGLDockableOrdinaryBrowseDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void OnInitialUpdate(); // called first time after construct

// Implementation
public:
	virtual ~COpenGLDockableOrdinaryBrowseView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnStyleChanged(int nStyleType, LPSTYLESTRUCT lpStyleStruct);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in OpenGLDockableOrdinaryBrowseView.cpp
inline COpenGLDockableOrdinaryBrowseDoc* COpenGLDockableOrdinaryBrowseView::GetDocument() const
   { return reinterpret_cast<COpenGLDockableOrdinaryBrowseDoc*>(m_pDocument); }
#endif

