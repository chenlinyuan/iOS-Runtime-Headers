/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGMessage : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _accountHandles;
    NSArray * _attachments;
    NSDate * _date;
    NSString * _domainIdentifier;
    NSString * _subject;
    NSString * _textContent;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, copy) NSArray *accountHandles;
@property (nonatomic, readonly) NSArray *attachments;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSString *domainIdentifier;
@property (nonatomic, copy) NSString *subject;
@property (nonatomic, copy) NSString *textContent;
@property (nonatomic, copy) NSString *uniqueIdentifier;

+ (id)fromDictionary:(id)arg1;
+ (id)messageWithSearchableItem:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountHandles;
- (id)asDictionary;
- (id)attachments;
- (unsigned int)contentLength;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)domainIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSearchableItem:(id)arg1;
- (BOOL)isEqualToMessage:(id)arg1;
- (void)setAccountHandles:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDomainIdentifier:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setTextContent:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)subject;
- (id)textContent;
- (id)uniqueIdentifier;

@end
