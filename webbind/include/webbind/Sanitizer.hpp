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
    jsbind::Sequence<jsbind::Any> elements() const;
    void elements(const jsbind::Sequence<jsbind::Any>& value);
    jsbind::Sequence<jsbind::Any> removeElements() const;
    void removeElements(const jsbind::Sequence<jsbind::Any>& value);
    jsbind::Sequence<jsbind::Any> replaceWithChildrenElements() const;
    void replaceWithChildrenElements(const jsbind::Sequence<jsbind::Any>& value);
    jsbind::Sequence<jsbind::Any> attributes() const;
    void attributes(const jsbind::Sequence<jsbind::Any>& value);
    jsbind::Sequence<jsbind::Any> removeAttributes() const;
    void removeAttributes(const jsbind::Sequence<jsbind::Any>& value);
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

