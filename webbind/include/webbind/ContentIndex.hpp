#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ContentDescription;


class ContentDescription : public emlite::Val {
  explicit ContentDescription(Handle h) noexcept;
public:
    static ContentDescription take_ownership(Handle h) noexcept;
    explicit ContentDescription(const emlite::Val &val) noexcept;
    ContentDescription() noexcept;
    ContentDescription clone() const noexcept;
    jsbind::DOMString id() const;
    void id(const jsbind::DOMString& value);
    jsbind::DOMString title() const;
    void title(const jsbind::DOMString& value);
    jsbind::DOMString description() const;
    void description(const jsbind::DOMString& value);
    ContentCategory category() const;
    void category(const ContentCategory& value);
    jsbind::Sequence<jsbind::Any> icons() const;
    void icons(const jsbind::Sequence<jsbind::Any>& value);
    jsbind::USVString url() const;
    void url(const jsbind::USVString& value);
};

class ContentIndex : public emlite::Val {
    explicit ContentIndex(Handle h) noexcept;

public:
    explicit ContentIndex(const emlite::Val &val) noexcept;
    static ContentIndex take_ownership(Handle h) noexcept;

    ContentIndex clone() const noexcept;
    jsbind::Promise add(const ContentDescription& description);
    jsbind::Promise delete_(const jsbind::DOMString& id);
    jsbind::Promise getAll();
};

