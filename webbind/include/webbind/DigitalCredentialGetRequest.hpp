#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type DigitalCredentialGetRequest
class DigitalCredentialGetRequest : public emlite::Val {
  explicit DigitalCredentialGetRequest(Handle h) noexcept;
public:
    static DigitalCredentialGetRequest take_ownership(Handle h) noexcept;
    explicit DigitalCredentialGetRequest(const emlite::Val &val) noexcept;
    DigitalCredentialGetRequest() noexcept;
    [[nodiscard]] DigitalCredentialGetRequest clone() const noexcept;
    /// Getter of the `protocol` attribute.
    [[nodiscard]] jsbind::String protocol() const;
    /// Setter of the `protocol` attribute.
    void protocol(const jsbind::String& value);
    /// Getter of the `data` attribute.
    [[nodiscard]] jsbind::Object data() const;
    /// Setter of the `data` attribute.
    void data(const jsbind::Object& value);
};

} // namespace webbind