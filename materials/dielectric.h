//
// Created by Steve Hwan on 10/2/18.
//

#ifndef RAYTRACER1_DIELECTRIC_H
#define RAYTRACER1_DIELECTRIC_H

#include "../scene_geometry/hitable.h"
#include "material.h"

class dielectric : public material {
public:
    dielectric(float ri) : ref_idx(ri) {}
    virtual bool scatter(const ray& r_in, const hit_record& rec, vec3& attenuation, ray& scattered) const;

    float ref_idx;
};


#endif //RAYTRACER1_DIELECTRIC_H
