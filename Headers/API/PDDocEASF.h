/*
* DO NOT EDIT THIS FILE MANNUALLY.
*
*
* Header file generated AUTOMATICALLY by The batch file ...\Tools\win\makePDFLHfromASF.bat.
* The batch file calls ZBFGen2, a ZString2.0 library program, using the template ...\Tools\win\ztrings\PDFLError_Str.tmpl.
*
* DO NOT EDIT THIS FILE MANNUALLY. THIS IS CLOSELY TIED WITH THE ZString2.0 Binary
* Format. Regenerate this whenever the corresponding .asfx file changes.
*
*/


DefineErr(pdErrNoError, "No error.")

DefineErr(pdErrBadFont, "Bad font object or font descriptor object.")

DefineErr(pdErrEmbeddingFont, "Error while trying to embed a font.")

DefineErr(pdErrBadRootObj, "The root object is missing or invalid.")

DefineErr(pdErrBadBaseObj, "The base pages object is missing or invalid.")

DefineErr(pdErrBadOutlineObj, "The outlines object is missing or invalid.")

DefineErr(pdErrBadResMetrics, "Invalid or corrupt font metrics in the resource file.")

DefineErr(pdErrBadPageObj, "A page object is missing or invalid.")

DefineErr(pdErrThumbError, "Error while processing thumbnail.")

DefineErr(pdErrBadAnnotation, "Invalid annotation object.")

DefineErr(pdErrBadPageTree, "The document's page tree contains an invalid node.")

DefineErr(pdErrUnknownProcsets, "Information needed to print a page is unavailable.")

DefineErr(pdErrUnableToOpenDoc, "This file could not be opened.")

DefineErr(pdErrIsFileLocked, "The file may be read-only, or another user may have it open. Please save the document with a different name or in a different folder.")

DefineErr(pdErrUnableToWrite, "Cannot write to this file. Please save the document with a different name or in a different folder.")

DefineErr(pdErrUnableToRenameTemp, "Cannot save to this filename. Please save the document with a different name or in a different folder.")

DefineErr(pdErrUnableToRecover, "Cannot recover original file.")

DefineErr(pdErrUnableToRead, "Cannot read file.")

DefineErr(pdErrUnknownFileType, "This is not a valid Portable Document File (PDF) document. It cannot be opened.")

DefineErr(pdErrAlreadyOpen, "This file is already open.")

DefineErr(pdErrTooManyPagesForOpen, "This file cannot be opened because it contains too many pages.")

DefineErr(pdErrNotEnoughSpaceForTempFile, "There is not enough temporary disk space for this operation.")

DefineErr(pdErrTooManyPagesForInsert, "Inserting this file would result in a document with too many pages.")

DefineErr(pdErrBookmarksError, "There is an error in the bookmarks.")

DefineErr(pdErrCannotOpenMoreBkMark, "Cannot open more bookmarks. ")

DefineErr(pdErrUnableToExtractFontErr, "Cannot extract embedded font.")

DefineErr(pdErrCannotOpenNotes, "An error occurred while creating the document notes file.")

DefineErr(pdErrNoNotes, "This document has no notes.")

DefineErr(pdErrCopyPageFailed, "The copy of a page failed.")

DefineErr(pdErrNeedRebuild, "This file is damaged.")

DefineErr(pdErrBadFontFlags, "The font '%s' contains bad /Flags.")

DefineErr(pdErrBadFontBBox, "The font '%s' contains a bad /BBox.")

DefineErr(pdErrBadFontWidths, "The font '%s' contains bad /Widths.")

DefineErr(pdErrOldCosFileOBSOLETE, "OBSOLETE")

DefineErr(pdErrTrySaveAs, "This file can only be saved using Save As.")

DefineErr(pdErrAbortNotes, "Creation of the notes file was cancelled.")

DefineErr(pdErrPagesLockedNotDeleted, "One or more pages are in use and could not be deleted.")

DefineErr(pdErrNotEnoughMemoryToOpenDoc, "There is not enough memory available to open the document.")

DefineErr(pdErrUnableToCloseDueToRefs, "Cannot close document because of outstanding references.")

DefineErr(pdErrNeedPassword, "This document requires authentication (e.g. a password).")

DefineErr(pdErrOpNotPermitted, "This operation is not permitted.")

DefineErr(pdErrNoCryptHandler, "The security plug-in required by this command is unavailable.")

DefineErr(pdErrBadThread, "Invalid article object.")

DefineErr(pdErrBadBead, "Invalid article element.")

DefineErr(pdErrThreadProcessing, "Error while processing articles.")

DefineErr(pdErrUnknownAction, "Unknown action type.")

DefineErr(pdErrBadAction, "Invalid action object.")

DefineErr(pdErrCantUseNewVersion, "This file contains information not understood by Acrobat. It cannot be used for this operation.")

DefineErr(pdErrOldEncryption, "Acrobat cannot decrypt this document.")

DefineErr(pdErrUnableToExtractFont, "Cannot extract the embedded font '%s'. Some characters may not display or print correctly.")

DefineErr(pdErrUnableToFindFont, "Cannot find or create the font '%s'. Some characters may not display or print correctly.")

DefineErr(pdErrBadAnnotColor, "Invalid annotation color (only RGB colors are allowed).")

DefineErr(pdErrNeedCryptHandler, "Cannot execute this command on an unsecured document.")

DefineErr(pdErrBadFontDescMetrics, "The font '%s' contains bad /FontDescriptor metrics.")

DefineErr(pdErrWhileRecoverInsertPages, "There was an error while inserting or extracting pages and another error while trying to recover.")

DefineErr(pdErrBadBookmark, "Invalid bookmark object.")

DefineErr(pdErrBadFileSpec, "Invalid file specification object.")

DefineErr(pdErrAfterSave, "This document was successfully saved, but an error occurred after saving the document. Please close and reopen the document.")

DefineErr(pdErrUnableToXlateText, "Some text in the font and character '%s' could not be displayed or printed correctly. The font could not be reencoded.")

DefineErr(pdErrTextStringTooShort, "Not enough bytes in text string for multibyte character code.")

DefineErr(pdErrBadCMap, "The encoding (CMap) specified by a font is corrupted.")

DefineErr(pdErrOldATMVersion, "The font '%s' cannot be displayed with the installed version of ATM.")

DefineErr(pdErrZeroPageFile, "This file cannot be opened because it has no pages.")

DefineErr(pdErrATMMemory, "ATM is running out of memory. Text in font '%s' may not render properly.")

DefineErr(pdErrOptMemory, "There is not enough memory to optimize this file.")

DefineErr(pdErrCancelSave, "The Save operation was cancelled.")

DefineErr(pdErrCannotMergeWithSubsetFonts, "These documents contain subset fonts that have the same name and cannot be merged.")

DefineErr(pdErrCannotReopenDoc, "This document was successfully saved, but an error occurred after saving the document. Please close and reopen the document.")

DefineErr(pdErrNoPDDocForCosDoc, "There is no PDDoc associated with this CosDoc.")

DefineErr(pdErrHostEncodingNotSet, "The application has not set the host encoding.")

DefineErr(pdErrInvalidEmbeddedFont, "Invalid font '%s' was removed from the document.")

DefineErr(pdErrCannotDeleteAllPages, "You cannot delete all pages.  At least one page must remain.")

DefineErr(pdErrStartLessThanEnd, "The starting page number must be less than or the same as the ending page number.")

DefineErr(pdErrNotValidPage, "There is no page numbered '%s' in this document.")

DefineErr(pdErrCannotBeBlankPage, "The page number cannot be left blank.")

DefineErr(pdErrInvalidPageNumber, "'%s' is an invalid page number.")

DefineErr(pdErrExceedEncryptionLength, "Exceeds support encryption key length")

DefineErr(pdErrExceedEncryptionVersion, "An updated version of Acrobat is needed in order to open this document.")

DefineErr(pdErrRequireTrustedMode, "Only Adobe certified Acrobat plug-ins are allowed while viewing this document.")

DefineErr(pdErrMissingGlyphs, "Cannot find a substitution font with all the characters used by the font named: '%s, some characters may not be displayed or printed.")

DefineErr(pdErrNeedTradChinese, "An error has occurred that may be fixed by installing the latest version of the Traditional Chinese Language Support package.")

DefineErr(pdErrNeedSimpChinese, "An error has occurred that may be fixed by installing the latest version of the Simplified Chinese Language Support package.")

DefineErr(pdErrNeedKorean, "An error has occurred that may be fixed by installing the latest version of the Korean Language Support package.")

DefineErr(pdErrNeedJapanese, "An error has occurred that may be fixed by installing the latest version of the Japanese Language Support package.")

DefineErr(pdErrMissingSubsetFont, "A font required for font substitution is missing.")

DefineErr(pdErrCMapNotFound, "The encoding (CMap) specified by a font is missing.")

DefineErr(pdMsgOptimizingImages, "Consolidating duplicate images")

DefineErr(pdMsgOptimizingGraphics, "Consolidating duplicate page backgrounds")

DefineErr(pdMsgCopyingFile, "Copying file")

DefineErr(pdMsgLinearizing, "Optimizing for Fast Web Viewing")

DefineErr(pdMsgGarbageCollecting, "Removing unused objects and saving")

DefineErr(pdMsgSavingFile, "Saving file")

DefineErr(pdErrLimitcheck, "Implementation limit exceeded")

DefineErr(pdErrPrintAsImageSpoolFileFull, "There is insufficient disk space for the print job spool file to hold the entire print job. Try freeing up disk space on the startup volume and print the remaining pages of the document again.")

DefineErr(pdErrInvalidMediaBox, "Invalid MediaBox")

DefineErr(pdMsgOptimizingFonts, "Consolidating duplicate fonts")

DefineErr(pdMsgOptimizingStreams, "Optimizing streams")

DefineErr(pdEnumCanceled, "Enumeration process canceled by the callback function")

DefineErr(pdErrFontEmbeddingFailed, "Could not embed '%s'")

DefineErr(pdMsgEmbeddingFonts, "Embedding Fonts")

DefineErr(pdMsgCharacterUsage, "Determining characters used in document")

DefineErr(pdErrFontEmbeddingCanceled, "Font embedding canceled")

DefineErr(pdErrMultipleDocuments, "The operation could not be performed because the objects belong to different documents.")

DefineErr(pdErrBadOCObject, "Invalid type or value in a Layer object.")

DefineErr(pdErrNoInlineImage, "The operation could not be performed because the image is inline.")

DefineErr(pdErrNoCryptFilterHandler, "The required Crypt Filter is not registed by the security handler plug-in.")

DefineErr(pdErrBadEncryptDict, "Bad encrypt dictionary")

DefineErr(pdMsgCompressingObjects, "Compressing objects")

DefineErr(pdErrNoPermHandler, "The permission handler required by this command is unavailable.")

DefineErr(pdErrDuplicatePermHandler, "The permission handler has already been added for this doc.")

DefineErr(pdErrExceedMaxPermHandlers, "Have reached the max number of permission handlers for this doc.")

DefineErr(pdMsgOptimizingJBIG2Dicts, "Optimizing JBIG2 Dictionaries")

DefineErr(pdErrBadEncoding, "The font '%s' contains an invalid encoding. Some characters may not display.")

DefineErr(pdErrMatrixTooBig, "Implementation limit exceeded. Please try decreasing magnification level.")

DefineErr(pdErrProcess, "Process ")

DefineErr(pdErrCyan, "Cyan")

DefineErr(pdErrMagenta, "Magenta")

DefineErr(pdErrYellow, "Yellow")

DefineErr(pdErrBlack, "Black")

DefineErr(pdErrUnknownOutputCondition, "Unknown Output Condition")

DefineErr(pdErrNeedExtendedLang, "An error has occurred that may be fixed by installing the latest version of the Extended Language Support package.")

DefineErr(pdErrUnknownCryptFilter, "This file is encrypted with an unsupported cryptograhpic algorithm. A later version of Acrobat may be needed in order to open this document.")

DefineErr(pdErrNeed3D, "An error has occurred that may be fixed by installing the latest version of the 3D Support package.")

DefineErr(pdErr3DUnsupported, "3D artwork is not supported under this operating system.")

DefineErr(pdErrNonFIPSCrypt, "Use of non FIPS cryptography is not permitted while in FIPS mode.")



/* End of automatic generated header file */

/***** End of file ***********************************************************/
