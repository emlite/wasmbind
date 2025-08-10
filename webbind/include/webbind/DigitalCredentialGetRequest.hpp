#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type DigitalCredentialGetRequest
/// [`DigitalCredentialGetRequest`](https://developer.mozilla.org/en-US/docs/Web/API/DigitalCredentialGetRequest)
class DigitalCredentialGetRequest : public emlite::Val {
  explicit DigitalCredentialGetRequest(Handle h) noexcept;
public:
    static DigitalCredentialGetRequest take_ownership(Handle h) noexcept;
    explicit DigitalCredentialGetRequest(const emlite::Val &val) noexcept;
    DigitalCredentialGetRequest() noexcept;
    [[nodiscard]] DigitalCredentialGetRequest clone() const noexcept;
    [[nodiscard]] jsbind::String protocol() const;
    void protocol(const jsbind::String& value);
    [[nodiscard]] jsbind::Object data() const;
    void data(const jsbind::Object& value);
};

} // namespace webbind