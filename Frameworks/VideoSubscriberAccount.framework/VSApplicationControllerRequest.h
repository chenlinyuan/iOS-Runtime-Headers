/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSApplicationControllerRequest : NSObject {
    NSString * _SAMLRequest;
    NSString * _authenticationToken;
    NSString * _requestorVerificationToken;
    int  _type;
    NSDictionary * _userInfo;
}

@property (nonatomic, copy) NSString *SAMLRequest;
@property (nonatomic, copy) NSString *authenticationToken;
@property (nonatomic, copy) NSString *requestorVerificationToken;
@property (nonatomic) int type;
@property (nonatomic, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)SAMLRequest;
- (id)authenticationToken;
- (id)requestorVerificationToken;
- (void)setAuthenticationToken:(id)arg1;
- (void)setRequestorVerificationToken:(id)arg1;
- (void)setSAMLRequest:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUserInfo:(id)arg1;
- (int)type;
- (id)userInfo;

@end
