#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SanitizerConfig
class SanitizerConfig : public emlite::Val {
  explicit SanitizerConfig(Handle h) noexcept;
public:
    static SanitizerConfig take_ownership(Handle h) noexcept;
    explicit SanitizerConfig(const emlite::Val &val) noexcept;
    SanitizerConfig() noexcept;
    [[nodiscard]] SanitizerConfig clone() const noexcept;
    /// Getter of the `elements` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> elements() const;
    /// Setter of the `elements` attribute.
    void elements(const jsbind::TypedArray<jsbind::Any>& value);
    /// Getter of the `removeElements` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> removeElements() const;
    /// Setter of the `removeElements` attribute.
    void removeElements(const jsbind::TypedArray<jsbind::Any>& value);
    /// Getter of the `replaceWithChildrenElements` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> replaceWithChildrenElements() const;
    /// Setter of the `replaceWithChildrenElements` attribute.
    void replaceWithChildrenElements(const jsbind::TypedArray<jsbind::Any>& value);
    /// Getter of the `attributes` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> attributes() const;
    /// Setter of the `attributes` attribute.
    void attributes(const jsbind::TypedArray<jsbind::Any>& value);
    /// Getter of the `removeAttributes` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> removeAttributes() const;
    /// Setter of the `removeAttributes` attribute.
    void removeAttributes(const jsbind::TypedArray<jsbind::Any>& value);
    /// Getter of the `comments` attribute.
    [[nodiscard]] bool comments() const;
    /// Setter of the `comments` attribute.
    void comments(bool value);
    /// Getter of the `dataAttributes` attribute.
    [[nodiscard]] bool dataAttributes() const;
    /// Setter of the `dataAttributes` attribute.
    void dataAttributes(bool value);
};

} // namespace webbind