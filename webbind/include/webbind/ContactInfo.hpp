#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class ContactAddress;
class Blob;

/// Dictionary type ContactInfo
class ContactInfo : public emlite::Val {
  explicit ContactInfo(Handle h) noexcept;
public:
    static ContactInfo take_ownership(Handle h) noexcept;
    explicit ContactInfo(const emlite::Val &val) noexcept;
    ContactInfo() noexcept;
    [[nodiscard]] ContactInfo clone() const noexcept;
    /// Getter of the `address` attribute.
    [[nodiscard]] jsbind::TypedArray<ContactAddress> address() const;
    /// Setter of the `address` attribute.
    void address(const jsbind::TypedArray<ContactAddress>& value);
    /// Getter of the `email` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> email() const;
    /// Setter of the `email` attribute.
    void email(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `icon` attribute.
    [[nodiscard]] jsbind::TypedArray<Blob> icon() const;
    /// Setter of the `icon` attribute.
    void icon(const jsbind::TypedArray<Blob>& value);
    /// Getter of the `name` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> name() const;
    /// Setter of the `name` attribute.
    void name(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `tel` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> tel() const;
    /// Setter of the `tel` attribute.
    void tel(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind