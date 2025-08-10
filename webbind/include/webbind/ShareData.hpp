#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class File;

/// Dictionary type ShareData
/// [`ShareData`](https://developer.mozilla.org/en-US/docs/Web/API/ShareData)
class ShareData : public emlite::Val {
  explicit ShareData(Handle h) noexcept;
public:
    static ShareData take_ownership(Handle h) noexcept;
    explicit ShareData(const emlite::Val &val) noexcept;
    ShareData() noexcept;
    [[nodiscard]] ShareData clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<File> files() const;
    void files(const jsbind::TypedArray<File>& value);
    [[nodiscard]] jsbind::String title() const;
    void title(const jsbind::String& value);
    [[nodiscard]] jsbind::String text() const;
    void text(const jsbind::String& value);
    [[nodiscard]] jsbind::String url() const;
    void url(const jsbind::String& value);
};

} // namespace webbind