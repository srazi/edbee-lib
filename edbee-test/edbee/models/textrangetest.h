/**
 * Copyright 2011-2012 - Reliable Bits Software by Blommers IT. All Rights Reserved.
 * Author Rick Blommers
 */

#pragma once

#include "util/test.h"

namespace edbee {

class TextBuffer;
class TextDocument;
class TextEditorController;
class TextRangeSet;

class TextRangeTest : public edbee::test::TestCase
{
    Q_OBJECT

private slots:
    void init();
    void clean();

    void testMoveCaret();
    void testMoveCaretWhileChar();
    void testMoveCaretUntilChar();
    void testMoveCaretByCharGroup();
    void testMoveCaretToLineBoundary();

private:
    TextDocument* doc_;
    TextBuffer* bufRef_;
};


class TextRangeSetTest : public edbee::test::TestCase
{
    Q_OBJECT

private slots:

    void init();
    void clean();

    void testConstructor();
    void testAddRange();
    void testRangesBetweenOffsets();
    void testMoveCarets();
    void testChangeSpatial();
    void testGetSelectedTextExpandedToFullLines();

    void testSubstractRange();


private:
    TextEditorController* controller_;
    TextDocument* docRef_;
    TextBuffer* bufRef_;
    TextRangeSet* selRef_;
};


} // edbee

DECLARE_NAMED_TEST(range, edbee::TextRangeTest);
DECLARE_TEST(edbee::TextRangeSetTest);