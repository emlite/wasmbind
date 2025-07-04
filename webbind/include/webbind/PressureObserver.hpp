#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class PressureObserverOptions;
class PressureRecord;


class PressureObserverOptions : public emlite::Val {
  explicit PressureObserverOptions(Handle h) noexcept;
public:
    static PressureObserverOptions take_ownership(Handle h) noexcept;
    explicit PressureObserverOptions(const emlite::Val &val) noexcept;
    PressureObserverOptions() noexcept;
    PressureObserverOptions clone() const noexcept;
    unsigned long sampleInterval() const;
    void sampleInterval(unsigned long value);
};

class PressureObserver : public emlite::Val {
    explicit PressureObserver(Handle h) noexcept;

public:
    explicit PressureObserver(const emlite::Val &val) noexcept;
    static PressureObserver take_ownership(Handle h) noexcept;

    PressureObserver clone() const noexcept;
    PressureObserver(const jsbind::Function& callback);
    jsbind::Promise observe(const PressureSource& source, const PressureObserverOptions& options);
    jsbind::Undefined unobserve(const PressureSource& source);
    jsbind::Undefined disconnect();
    jsbind::Sequence<PressureRecord> takeRecords();
    static jsbind::FrozenArray<PressureSource> knownSources();
};

