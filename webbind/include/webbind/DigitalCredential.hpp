#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Credential.hpp"

namespace webbind {

/// Interface DigitalCredential
/// [`DigitalCredential`](https://developer.mozilla.org/en-US/docs/Web/API/DigitalCredential)
class DigitalCredential : public Credential {
    explicit DigitalCredential(Handle h) noexcept;
public:
    explicit DigitalCredential(const emlite::Val &val) noexcept;
    static DigitalCredential take_ownership(Handle h) noexcept;
    [[nodiscard]] DigitalCredential clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The toJSON method.
    /// [`DigitalCredential.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/DigitalCredential/toJSON)
    jsbind::Object toJSON();
    /// [`DigitalCredential.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/DigitalCredential/protocol)
    /// [`DigitalCredential.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/DigitalCredential/protocol)
    [[nodiscard]] jsbind::String protocol() const;
    /// [`DigitalCredential.data`](https://developer.mozilla.org/en-US/docs/Web/API/DigitalCredential/data)
    /// [`DigitalCredential.data`](https://developer.mozilla.org/en-US/docs/Web/API/DigitalCredential/data)
    [[nodiscard]] jsbind::Object data() const;
    /// The userAgentAllowsProtocol method.
    /// [`DigitalCredential.userAgentAllowsProtocol`](https://developer.mozilla.org/en-US/docs/Web/API/DigitalCredential/userAgentAllowsProtocol)
    static bool userAgentAllowsProtocol(const jsbind::String& protocol);
};

} // namespace webbind