#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type UnknownCredentialOptions
/// [`UnknownCredentialOptions`](https://developer.mozilla.org/en-US/docs/Web/API/UnknownCredentialOptions)
class UnknownCredentialOptions : public emlite::Val {
  explicit UnknownCredentialOptions(Handle h) noexcept;
public:
    static UnknownCredentialOptions take_ownership(Handle h) noexcept;
    explicit UnknownCredentialOptions(const emlite::Val &val) noexcept;
    UnknownCredentialOptions() noexcept;
    [[nodiscard]] UnknownCredentialOptions clone() const noexcept;
    [[nodiscard]] jsbind::String rpId() const;
    void rpId(const jsbind::String& value);
    [[nodiscard]] jsbind::Any credentialId() const;
    void credentialId(const jsbind::Any& value);
};

} // namespace webbind