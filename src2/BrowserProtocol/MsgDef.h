#ifndef _BROWSER_MSG_DEF__
#define _BROWSER_MSG_DEF__

static const UINT XBM_MSG_BEGIN_ID		=	WM_USER+100;
///
static const UINT XBM_MSG_BROWSERCREATED =   XBM_MSG_BEGIN_ID + 1;
static const UINT XBM_MSG_CONNECT		=   XBM_MSG_BEGIN_ID + 2;
static const UINT XBM_MSG_CREATEANDNAVIGATE = XBM_MSG_BEGIN_ID + 3;
static const UINT XBM_MSG_NAVIGATE      =   XBM_MSG_BEGIN_ID + 4;
static const UINT XBM_MSG_PROCESSCREATED =  XBM_MSG_BEGIN_ID + 5;
static const UINT XBM_MSG_HOSTWNDSIZE    = XBM_MSG_BEGIN_ID + 6;

static const UINT XBM_MSG_DESTROY       =  XBM_MSG_BEGIN_ID + 7;

static const UINT XBM_MSG_END_ID        =   XBM_MSG_BEGIN_ID + 1000;

#endif