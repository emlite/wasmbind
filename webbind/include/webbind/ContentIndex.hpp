#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ContentDescription.hpp"

namespace webbind {

/// Interface ContentIndex
/// [`ContentIndex`](https://developer.mozilla.org/en-US/docs/Web/API/ContentIndex)
class ContentIndex : public emlite::Val {
    explicit ContentIndex(Handle h) noexcept;
public:
    explicit ContentIndex(const emlite::Val &val) noexcept;
    static ContentIndex take_ownership(Handle h) noexcept;
    [[nodiscard]] ContentIndex clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
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

} // namespace webbind