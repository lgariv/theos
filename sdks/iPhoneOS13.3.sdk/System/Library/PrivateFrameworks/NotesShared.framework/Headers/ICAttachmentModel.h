//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/ICAttachmentModelUI-Protocol.h>
#import <NotesShared/QLPreviewItem-Protocol.h>

@class ICAttachment, NSString, NSURL;

@interface ICAttachmentModel : NSObject <ICAttachmentModelUI, QLPreviewItem>
{
    BOOL _previewGenerationOperationCancelled;
    BOOL _mergeableDataDirty;
    ICAttachment *_attachment;
}

+ (void)deletePreviewItemHardLinkURLs;
+ (id)contentInfoTextWithAttachmentCount:(NSUInteger)arg1;
@property(nonatomic, getter=isMergeableDataDirty) BOOL mergeableDataDirty; // @synthesize mergeableDataDirty=_mergeableDataDirty;
@property(readonly, nonatomic) __weak ICAttachment *attachment; // @synthesize attachment=_attachment;
@property BOOL previewGenerationOperationCancelled; // @synthesize previewGenerationOperationCancelled=_previewGenerationOperationCancelled;
// - (void).cxx_destruct;
- (id)mergeableDataForCopying;
- (id)dataForTypeIdentifier:(id)arg1;
- (id)fileURLForTypeIdentifier:(id)arg1;
- (id)providerFileTypes;
- (id)providerDataTypes;
- (id)dataForQuickLook;
@property(readonly, nonatomic) BOOL supportsQuickLook;
@property(readonly, nonatomic) NSString *previewItemTitle;
- (id)correctedHardlinkURLFileExtensionForExtention:(id)arg1;
- (id)generateHardLinkURLIfNecessaryForURL:(id)arg1 withFileName:(id)arg2;
- (id)generateHardLinkURLIfNecessaryForURL:(id)arg1;
- (id)generateTemporaryURLWithExtension:(id)arg1;
@property(readonly, nonatomic) NSURL *previewItemURL;
- (id)titleForSubAttachment:(id)arg1;
- (id)hardLinkFolderURL;
- (BOOL)canConvertToHTMLForSharing;
- (id)attributesForSharingHTMLWithTagName:(id )arg1 textContent:(id )arg2;
- (void)noteWillAddOrRemovePassword;
- (id)localizedFallbackSubtitleMac;
- (id)localizedFallbackSubtitleIOS;
- (id)localizedFallbackTitle;
- (long long)previewImageOrientation;
- (CGAffineTransform)previewImageOrientationTransform;
- (void)addLocation;
- (void)updateFileBasedAttributes;
- (BOOL)isReadyToPresent;
@property(readonly, nonatomic) CGSize intrinsicContentSize;
- (void)willMarkAttachmentForDeletion;
- (void)undeleteSubAttachments;
- (void)deleteSubAttachments;
- (void)updateAttachmentMarkedForDeletionStateAttachmentIsInNote:(BOOL)arg1;
- (BOOL)shouldCropImage;
- (void)updateAfterLoadWithSubAttachmentIdentifierMap:(id)arg1;
- (BOOL)shouldGeneratePreviewAfterChangeInSubAttachmentWithIdentifier:(id)arg1;
- (BOOL)shouldSyncPreviewImageToCloud:(id)arg1;
- (short)sectionForSubAttachments;
- (void)updateAttachmentSize;
- (void)attachmentIsDeallocating:(id)arg1;
- (void)attachmentDidRefresh:(BOOL)arg1;
- (void)attachmentWillRefresh:(BOOL)arg1;
- (void)attachmentWillTurnIntoFault;
- (void)attachmentAwakeFromFetch;
- (id)attachmentModelType;
- (id)additionalIndexableTextContentInNote;
- (id)standaloneTitleForNote;
- (BOOL)providesStandaloneTitleForNote;
- (id)textContentInNote;
- (void)regenerateTextContentInNote;
- (BOOL)providesTextContentInNote;
- (id)searchableTextContentInNote;
- (id)searchableTextContentForLocation;
- (id)searchableTextContent;
@property(readonly, nonatomic) BOOL canSaveURLWithOtherAttachments;
@property(readonly, nonatomic) BOOL canSaveURL;
@property(readonly, nonatomic) NSURL *saveURL;
@property(readonly, nonatomic) BOOL canMarkup;
@property(readonly, nonatomic) BOOL showThumbnailInNoteList;
@property(readonly, nonatomic) BOOL hasThumbnailImage;
@property(readonly, nonatomic) NSString *hardLinkVersion;
@property(readonly, nonatomic) NSString *previewImageTypeUTI;
@property(readonly, nonatomic) BOOL supportsImageClassification;
@property(readonly, nonatomic) BOOL supportsOCR;
@property(readonly, nonatomic) BOOL requiresPostProcessing;
@property(readonly, nonatomic) BOOL needsFullSizePreview;
@property(readonly, nonatomic) BOOL preferLocalPreviewImages;
@property(readonly, nonatomic) BOOL previewsSupportMultipleAppearances;
@property(readonly, nonatomic) BOOL hasPreviews;
- (void)writeMergeableData;
- (BOOL)mergeWithMergeableData:(id)arg1;
- (id)initWithAttachment:(id)arg1;
- (BOOL)shouldShowInContentInfoText;
- (void)dealloc;

@end
