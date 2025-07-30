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
    jsbind::String id() const;
    void id(const jsbind::String& value);
    jsbind::String title() const;
    void title(const jsbind::String& value);
    jsbind::String description() const;
    void description(const jsbind::String& value);
    ContentCategory category() const;
    void category(const ContentCategory& value);
    jsbind::TypedArray<jsbind::Any> icons() const;
    void icons(const jsbind::TypedArray<jsbind::Any>& value);
    jsbind::String url() const;
    void url(const jsbind::String& value);
};

class ContentIndex : public emlite::Val {
    explicit ContentIndex(Handle h) noexcept;

public:
    explicit ContentIndex(const emlite::Val &val) noexcept;
    static ContentIndex take_ownership(Handle h) noexcept;

    ContentIndex clone() const noexcept;
    jsbind::Promise<jsbind::Undefined> add(const ContentDescription& description);
    jsbind::Promise<jsbind::Undefined> delete_(const jsbind::String& id);
    jsbind::Promise<jsbind::TypedArray<ContentDescription>> getAll();
};

