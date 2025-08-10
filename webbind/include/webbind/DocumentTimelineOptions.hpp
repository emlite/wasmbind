#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type DocumentTimelineOptions
/// [`DocumentTimelineOptions`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentTimelineOptions)
class DocumentTimelineOptions : public emlite::Val {
  explicit DocumentTimelineOptions(Handle h) noexcept;
public:
    static DocumentTimelineOptions take_ownership(Handle h) noexcept;
    explicit DocumentTimelineOptions(const emlite::Val &val) noexcept;
    DocumentTimelineOptions() noexcept;
    [[nodiscard]] DocumentTimelineOptions clone() const noexcept;
    [[nodiscard]] jsbind::Any originTime() const;
    void originTime(const jsbind::Any& value);
};

} // namespace webbind