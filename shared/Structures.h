#pragma once

//////////////////////////////////////////////////////////////////////////////

struct ConsoleParams
{
	ConsoleParams()
	: dwConsoleMainThreadId(0)
	, dwParentProcessId(0)
	, dwNotificationTimeout(0)
	, dwRefreshInterval(0)
	, dwRows(0)
	, dwColumns(0)
	, dwBufferRows(0)
	, dwBufferColumns(0)
	, dwMaxRows(0)
	, dwMaxColumns(0)
	, hwndConsoleWindow(NULL)
	, dwHookThreadId(0)
	{
	}

	ConsoleParams(const ConsoleParams& other)
	: dwConsoleMainThreadId(other.dwConsoleMainThreadId)
	, dwParentProcessId(other.dwParentProcessId)
	, dwNotificationTimeout(other.dwNotificationTimeout)
	, dwRefreshInterval(other.dwRefreshInterval)
	, dwRows(other.dwRows)
	, dwColumns(other.dwColumns)
	, dwBufferRows(other.dwBufferRows)
	, dwBufferColumns(other.dwBufferColumns)
	, dwMaxRows(other.dwMaxRows)
	, dwMaxColumns(other.dwMaxColumns)
	, hwndConsoleWindow(other.hwndConsoleWindow)
	, dwHookThreadId(other.dwHookThreadId)
	{
	}

	// startup stuff
	DWORD	dwConsoleMainThreadId;
	DWORD	dwParentProcessId;
	DWORD	dwNotificationTimeout;
	DWORD	dwRefreshInterval;
	DWORD	dwRows;
	DWORD	dwColumns;
	DWORD	dwBufferRows;
	DWORD	dwBufferColumns;

	// stuff set by console hook
	DWORD	dwMaxRows;
	DWORD	dwMaxColumns;
	HWND	hwndConsoleWindow;
	DWORD	dwHookThreadId;
};

//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////

struct ConsoleSize
{
	ConsoleSize()
	: dwRows(0)
	, dwColumns(0)
	, dwResizeWindowEdge(0)
	{
	}

	DWORD	dwRows;
	DWORD	dwColumns;

	// window edge used for resizing, one of WMSZ_* constants
	DWORD	dwResizeWindowEdge;
};


//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////

enum CopyNewlineChar
{
	newlineCRLF	= 0,
	newlineLF	= 1
};

//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////

struct ConsoleCopy
{
	ConsoleCopy()
	: coordStart()
	, coordEnd()
	, bNoWrap(false)
	, bTrimSpaces(false)
	, copyNewlineChar(newlineCRLF)
	{
	}

	COORD	coordStart;
	COORD	coordEnd;
	bool	bNoWrap;
	bool	bTrimSpaces;
	CopyNewlineChar	copyNewlineChar;
};


//////////////////////////////////////////////////////////////////////////////