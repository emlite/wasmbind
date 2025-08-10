#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface RTCIdentityAssertion
/// [`RTCIdentityAssertion`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIdentityAssertion)
class RTCIdentityAssertion : public emlite::Val {
    explicit RTCIdentityAssertion(Handle h) noexcept;
public:
    explicit RTCIdentityAssertion(const emlite::Val &val) noexcept;
    static RTCIdentityAssertion take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCIdentityAssertion clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new RTCIdentityAssertion(..)` constructor, creating a new RTCIdentityAssertion instance
    RTCIdentityAssertion(const jsbind::String& idp, const jsbind::String& name);
    /// Getter of the `idp` attribute.
    /// [`RTCIdentityAssertion.idp`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIdentityAssertion/idp)
    [[nodiscard]] jsbind::String idp() const;
    /// Setter of the `idp` attribute.
    /// [`RTCIdentityAssertion.idp`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIdentityAssertion/idp)
    void idp(const jsbind::String& value);
    /// Getter of the `name` attribute.
    /// [`RTCIdentityAssertion.name`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIdentityAssertion/name)
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    /// [`RTCIdentityAssertion.name`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIdentityAssertion/name)
    void name(const jsbind::String& value);
};

} // namespace webbind