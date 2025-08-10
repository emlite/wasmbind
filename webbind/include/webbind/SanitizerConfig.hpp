#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SanitizerConfig
/// [`SanitizerConfig`](https://developer.mozilla.org/en-US/docs/Web/API/SanitizerConfig)
class SanitizerConfig : public emlite::Val {
  explicit SanitizerConfig(Handle h) noexcept;
public:
    static SanitizerConfig take_ownership(Handle h) noexcept;
    explicit SanitizerConfig(const emlite::Val &val) noexcept;
    SanitizerConfig() noexcept;
    [[nodiscard]] SanitizerConfig clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> elements() const;
    void elements(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> removeElements() const;
    void removeElements(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> replaceWithChildrenElements() const;
    void replaceWithChildrenElements(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> attributes() const;
    void attributes(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> removeAttributes() const;
    void removeAttributes(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] bool comments() const;
    void comments(bool value);
    [[nodiscard]] bool dataAttributes() const;
    void dataAttributes(bool value);
};

} // namespace webbind