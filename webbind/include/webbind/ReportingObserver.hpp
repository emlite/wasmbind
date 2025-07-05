#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class ReportingObserver : public emlite::Val {
    explicit ReportingObserver(Handle h) noexcept;

public:
    explicit ReportingObserver(const emlite::Val &val) noexcept;
    static ReportingObserver take_ownership(Handle h) noexcept;

    ReportingObserver clone() const noexcept;
    ReportingObserver(const jsbind::Function& callback);
    ReportingObserver(const jsbind::Function& callback, const jsbind::Any& options);
    jsbind::Undefined observe();
    jsbind::Undefined disconnect();
    jsbind::Any takeRecords();
};

