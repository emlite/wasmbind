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
    SanitizerConfig clone() const noexcept;
    jsbind::TypedArray<jsbind::Any> elements() const;
    void elements(const jsbind::TypedArray<jsbind::Any>& value);
    jsbind::TypedArray<jsbind::Any> removeElements() const;
    void removeElements(const jsbind::TypedArray<jsbind::Any>& value);
    jsbind::TypedArray<jsbind::Any> replaceWithChildrenElements() const;
    void replaceWithChildrenElements(const jsbind::TypedArray<jsbind::Any>& value);
    jsbind::TypedArray<jsbind::Any> attributes() const;
    void attributes(const jsbind::TypedArray<jsbind::Any>& value);
    jsbind::TypedArray<jsbind::Any> removeAttributes() const;
    void removeAttributes(const jsbind::TypedArray<jsbind::Any>& value);
    bool comments() const;
    void comments(bool value);
    bool dataAttributes() const;
    void dataAttributes(bool value);
};

class Sanitizer : public emlite::Val {
    explicit Sanitizer(Handle h) noexcept;

public:
    explicit Sanitizer(const emlite::Val &val) noexcept;
    static Sanitizer take_ownership(Handle h) noexcept;

    Sanitizer clone() const noexcept;
    Sanitizer();
    Sanitizer(const jsbind::Any& configuration);
    SanitizerConfig get();
    jsbind::Undefined allowElement(const jsbind::Any& element);
    jsbind::Undefined removeElement(const jsbind::Any& element);
    jsbind::Undefined replaceElementWithChildren(const jsbind::Any& element);
    jsbind::Undefined allowAttribute(const jsbind::Any& attribute);
    jsbind::Undefined removeAttribute(const jsbind::Any& attribute);
    jsbind::Undefined setComments(bool allow);
    jsbind::Undefined setDataAttributes(bool allow);
    jsbind::Undefined removeUnsafe();
};

