#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class IdentityResolveOptions;
class IdentityUserInfo;
class IdentityProviderConfig;

/// Interface IdentityProvider
/// [`IdentityProvider`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityProvider)
class IdentityProvider : public emlite::Val {
    explicit IdentityProvider(Handle h) noexcept;
public:
    explicit IdentityProvider(const emlite::Val &val) noexcept;
    static IdentityProvider take_ownership(Handle h) noexcept;
    [[nodiscard]] IdentityProvider clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The close method.
    /// [`IdentityProvider.close`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityProvider/close)
    static jsbind::Undefined close();
    /// The resolve method.
    /// [`IdentityProvider.resolve`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityProvider/resolve)
    static jsbind::Promise<jsbind::Undefined> resolve(const jsbind::String& token);
    /// The resolve method.
    /// [`IdentityProvider.resolve`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityProvider/resolve)
    static jsbind::Promise<jsbind::Undefined> resolve(const jsbind::String& token, const IdentityResolveOptions& options);
    /// The getUserInfo method.
    /// [`IdentityProvider.getUserInfo`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityProvider/getUserInfo)
    static jsbind::Promise<jsbind::TypedArray<IdentityUserInfo>> getUserInfo(const IdentityProviderConfig& config);
};

} // namespace webbind