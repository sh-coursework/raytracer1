//
// Created by Steve Hwan on 10/2/18.
//

#include "lambertian.h"

bool lambertian::scatter(const ray &r_in, const hit_record &rec, vec3 &attenuation, ray &scattered) const {
    auto target = rec.p + rec.normal + random_in_unit_sphere();
    scattered = ray(rec.p, target-rec.p);
    attenuation = albedo;
    return true;
}
