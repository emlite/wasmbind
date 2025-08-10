#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type DigitalCredentialCreateRequest
class DigitalCredentialCreateRequest : public emlite::Val {
  explicit DigitalCredentialCreateRequest(Handle h) noexcept;
public:
    static DigitalCredentialCreateRequest take_ownership(Handle h) noexcept;
    explicit DigitalCredentialCreateRequest(const emlite::Val &val) noexcept;
    DigitalCredentialCreateRequest() noexcept;
    [[nodiscard]] DigitalCredentialCreateRequest clone() const noexcept;
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