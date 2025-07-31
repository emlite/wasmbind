#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The ReportingObserver class.
/// [`ReportingObserver`](https://developer.mozilla.org/en-US/docs/Web/API/ReportingObserver)
class ReportingObserver : public emlite::Val {
    explicit ReportingObserver(Handle h) noexcept;

public:
    explicit ReportingObserver(const emlite::Val &val) noexcept;
    static ReportingObserver take_ownership(Handle h) noexcept;

    [[nodiscard]] ReportingObserver clone() const noexcept;
    /// The `new ReportingObserver(..)` constructor, creating a new ReportingObserver instance
    ReportingObserver(const jsbind::Function& callback);
    /// The `new ReportingObserver(..)` constructor, creating a new ReportingObserver instance
    ReportingObserver(const jsbind::Function& callback, const jsbind::Any& options);
    /// The observe method.
    /// [`ReportingObserver.observe`](https://developer.mozilla.org/en-US/docs/Web/API/ReportingObserver/observe)
    jsbind::Undefined observe();
    /// The disconnect method.
    /// [`ReportingObserver.disconnect`](https://developer.mozilla.org/en-US/docs/Web/API/ReportingObserver/disconnect)
    jsbind::Undefined disconnect();
    /// The takeRecords method.
    /// [`ReportingObserver.takeRecords`](https://developer.mozilla.org/en-US/docs/Web/API/ReportingObserver/takeRecords)
    jsbind::Any takeRecords();
};

