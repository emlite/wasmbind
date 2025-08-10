#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PublicKeyCredentialDescriptor
/// [`PublicKeyCredentialDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/PublicKeyCredentialDescriptor)
class PublicKeyCredentialDescriptor : public emlite::Val {
  explicit PublicKeyCredentialDescriptor(Handle h) noexcept;
public:
    static PublicKeyCredentialDescriptor take_ownership(Handle h) noexcept;
    explicit PublicKeyCredentialDescriptor(const emlite::Val &val) noexcept;
    PublicKeyCredentialDescriptor() noexcept;
    [[nodiscard]] PublicKeyCredentialDescriptor clone() const noexcept;
    [[nodiscard]] jsbind::String type() const;
    void type(const jsbind::String& value);
    [[nodiscard]] jsbind::Any id() const;
    void id(const jsbind::Any& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> transports() const;
    void transports(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind