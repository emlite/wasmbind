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
    [[nodiscard]] ContentDescription clone() const noexcept;
    [[nodiscard]] jsbind::String id() const;
    void id(const jsbind::String& value);
    [[nodiscard]] jsbind::String title() const;
    void title(const jsbind::String& value);
    [[nodiscard]] jsbind::String description() const;
    void description(const jsbind::String& value);
    [[nodiscard]] ContentCategory category() const;
    void category(const ContentCategory& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> icons() const;
    void icons(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::String url() const;
    void url(const jsbind::String& value);
};

/// The ContentIndex class.
/// [`ContentIndex`](https://developer.mozilla.org/en-US/docs/Web/API/ContentIndex)
class ContentIndex : public emlite::Val {
    explicit ContentIndex(Handle h) noexcept;

public:
    explicit ContentIndex(const emlite::Val &val) noexcept;
    static ContentIndex take_ownership(Handle h) noexcept;

    [[nodiscard]] ContentIndex clone() const noexcept;
    /// The add method.
    /// [`ContentIndex.add`](https://developer.mozilla.org/en-US/docs/Web/API/ContentIndex/add)
    jsbind::Promise<jsbind::Undefined> add(const ContentDescription& description);
    /// The delete method.
    /// [`ContentIndex.delete`](https://developer.mozilla.org/en-US/docs/Web/API/ContentIndex/delete)
    jsbind::Promise<jsbind::Undefined> delete_(const jsbind::String& id);
    /// The getAll method.
    /// [`ContentIndex.getAll`](https://developer.mozilla.org/en-US/docs/Web/API/ContentIndex/getAll)
    jsbind::Promise<jsbind::TypedArray<ContentDescription>> getAll();
};

