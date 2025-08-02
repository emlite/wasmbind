#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Credential.hpp"
#include "enums.hpp"


/// The DigitalCredential class.
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
    /// Getter of the `protocol` attribute.
    /// [`DigitalCredential.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/DigitalCredential/protocol)
    [[nodiscard]] jsbind::String protocol() const;
    /// Getter of the `data` attribute.
    /// [`DigitalCredential.data`](https://developer.mozilla.org/en-US/docs/Web/API/DigitalCredential/data)
    [[nodiscard]] jsbind::Object data() const;
    /// The userAgentAllowsProtocol method.
    /// [`DigitalCredential.userAgentAllowsProtocol`](https://developer.mozilla.org/en-US/docs/Web/API/DigitalCredential/userAgentAllowsProtocol)
    static bool userAgentAllowsProtocol(const jsbind::String& protocol);
};

