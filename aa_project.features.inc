<?php
/**
 * @file
 * aa_project.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function aa_project_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function aa_project_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function aa_project_image_default_styles() {
  $styles = array();

  // Exported image style: project_content_breakpoints_theme_aa_theme_mobile_1x.
  $styles['project_content_breakpoints_theme_aa_theme_mobile_1x'] = array(
    'name' => 'project_content_breakpoints_theme_aa_theme_mobile_1x',
    'label' => 'project content mobile 1x',
    'effects' => array(
      30 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 720,
          'height' => 720,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: project_content_breakpoints_theme_aa_theme_normal_1x.
  $styles['project_content_breakpoints_theme_aa_theme_normal_1x'] = array(
    'name' => 'project_content_breakpoints_theme_aa_theme_normal_1x',
    'label' => 'project content normal 1x',
    'effects' => array(
      31 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 669,
          'height' => 669,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: project_preview_breakpoints_theme_aa_theme_mobile_1x.
  $styles['project_preview_breakpoints_theme_aa_theme_mobile_1x'] = array(
    'name' => 'project_preview_breakpoints_theme_aa_theme_mobile_1x',
    'label' => 'project preview module 1x',
    'effects' => array(
      32 => array(
        'label' => 'EPSA Image Crop',
        'help' => '',
        'effect callback' => 'epsacrop_crop_image',
        'form callback' => 'epsacrop_crop_image_form',
        'module' => 'epsacrop',
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 720,
          'height' => 720,
          'anchor' => 'center-center',
          'jcrop_settings' => array(
            'aspect_ratio' => 1,
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
          ),
        ),
        'weight' => -10,
      ),
      33 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 720,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: project_preview_breakpoints_theme_aa_theme_normal_1x.
  $styles['project_preview_breakpoints_theme_aa_theme_normal_1x'] = array(
    'name' => 'project_preview_breakpoints_theme_aa_theme_normal_1x',
    'label' => 'project preview normal 1x',
    'effects' => array(
      34 => array(
        'label' => 'EPSA Image Crop',
        'help' => '',
        'effect callback' => 'epsacrop_crop_image',
        'form callback' => 'epsacrop_crop_image_form',
        'module' => 'epsacrop',
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 289,
          'height' => 289,
          'anchor' => 'center-center',
          'jcrop_settings' => array(
            'aspect_ratio' => 1,
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
          ),
        ),
        'weight' => -10,
      ),
      35 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 289,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function aa_project_node_info() {
  $items = array(
    'project' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => t('Use it to create a project to the site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
