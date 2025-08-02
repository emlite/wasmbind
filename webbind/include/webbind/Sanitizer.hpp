#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class SanitizerConfig;


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

/// The Sanitizer class.
/// [`Sanitizer`](https://developer.mozilla.org/en-US/docs/Web/API/Sanitizer)
class Sanitizer : public emlite::Val {
    explicit Sanitizer(Handle h) noexcept;

public:
    explicit Sanitizer(const emlite::Val &val) noexcept;
    static Sanitizer take_ownership(Handle h) noexcept;

    [[nodiscard]] Sanitizer clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new Sanitizer(..)` constructor, creating a new Sanitizer instance
    Sanitizer();
    /// The `new Sanitizer(..)` constructor, creating a new Sanitizer instance
    Sanitizer(const jsbind::Any& configuration);
    /// The get method.
    /// [`Sanitizer.get`](https://developer.mozilla.org/en-US/docs/Web/API/Sanitizer/get)
    SanitizerConfig get();
    /// The allowElement method.
    /// [`Sanitizer.allowElement`](https://developer.mozilla.org/en-US/docs/Web/API/Sanitizer/allowElement)
    jsbind::Undefined allowElement(const jsbind::Any& element);
    /// The removeElement method.
    /// [`Sanitizer.removeElement`](https://developer.mozilla.org/en-US/docs/Web/API/Sanitizer/removeElement)
    jsbind::Undefined removeElement(const jsbind::Any& element);
    /// The replaceElementWithChildren method.
    /// [`Sanitizer.replaceElementWithChildren`](https://developer.mozilla.org/en-US/docs/Web/API/Sanitizer/replaceElementWithChildren)
    jsbind::Undefined replaceElementWithChildren(const jsbind::Any& element);
    /// The allowAttribute method.
    /// [`Sanitizer.allowAttribute`](https://developer.mozilla.org/en-US/docs/Web/API/Sanitizer/allowAttribute)
    jsbind::Undefined allowAttribute(const jsbind::Any& attribute);
    /// The removeAttribute method.
    /// [`Sanitizer.removeAttribute`](https://developer.mozilla.org/en-US/docs/Web/API/Sanitizer/removeAttribute)
    jsbind::Undefined removeAttribute(const jsbind::Any& attribute);
    /// The setComments method.
    /// [`Sanitizer.setComments`](https://developer.mozilla.org/en-US/docs/Web/API/Sanitizer/setComments)
    jsbind::Undefined setComments(bool allow);
    /// The setDataAttributes method.
    /// [`Sanitizer.setDataAttributes`](https://developer.mozilla.org/en-US/docs/Web/API/Sanitizer/setDataAttributes)
    jsbind::Undefined setDataAttributes(bool allow);
    /// The removeUnsafe method.
    /// [`Sanitizer.removeUnsafe`](https://developer.mozilla.org/en-US/docs/Web/API/Sanitizer/removeUnsafe)
    jsbind::Undefined removeUnsafe();
};

