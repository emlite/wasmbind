#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type DigitalCredentialCreateRequest
/// [`DigitalCredentialCreateRequest`](https://developer.mozilla.org/en-US/docs/Web/API/DigitalCredentialCreateRequest)
class DigitalCredentialCreateRequest : public emlite::Val {
  explicit DigitalCredentialCreateRequest(Handle h) noexcept;
public:
    static DigitalCredentialCreateRequest take_ownership(Handle h) noexcept;
    explicit DigitalCredentialCreateRequest(const emlite::Val &val) noexcept;
    DigitalCredentialCreateRequest() noexcept;
    [[nodiscard]] DigitalCredentialCreateRequest clone() const noexcept;
    [[nodiscard]] jsbind::String protocol() const;
    void protocol(const jsbind::String& value);
    [[nodiscard]] jsbind::Object data() const;
    void data(const jsbind::Object& value);
};

} // namespace webbind