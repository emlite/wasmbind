#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PublicKeyCredentialDescriptor
class PublicKeyCredentialDescriptor : public emlite::Val {
  explicit PublicKeyCredentialDescriptor(Handle h) noexcept;
public:
    static PublicKeyCredentialDescriptor take_ownership(Handle h) noexcept;
    explicit PublicKeyCredentialDescriptor(const emlite::Val &val) noexcept;
    PublicKeyCredentialDescriptor() noexcept;
    [[nodiscard]] PublicKeyCredentialDescriptor clone() const noexcept;
    /// Getter of the `type` attribute.
    [[nodiscard]] jsbind::String type() const;
    /// Setter of the `type` attribute.
    void type(const jsbind::String& value);
    /// Getter of the `id` attribute.
    [[nodiscard]] jsbind::Any id() const;
    /// Setter of the `id` attribute.
    void id(const jsbind::Any& value);
    /// Getter of the `transports` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> transports() const;
    /// Setter of the `transports` attribute.
    void transports(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind