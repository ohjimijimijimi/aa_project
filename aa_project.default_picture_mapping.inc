<?php
/**
 * @file
 * aa_project.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function aa_project_default_picture_mapping() {
  $export = array();

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'aa_project_content';
  $picture_mapping->breakpoint_group = 'aa_project_content';
  $picture_mapping->mapping = array(
    'custom.aa_theme.mobile' => array(
      '1x' => 'project_content_breakpoints_theme_aa_theme_mobile_1x',
    ),
    'custom.aa_theme.normal' => array(
      '1x' => 'project_content_breakpoints_theme_aa_theme_normal_1x',
    ),
  );
  $export['aa_project_content'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'aa_project_preview';
  $picture_mapping->breakpoint_group = 'aa_project_preview';
  $picture_mapping->mapping = array(
    'custom.aa_theme.mobile' => array(
      '1x' => 'project_preview_breakpoints_theme_aa_theme_mobile_1x',
    ),
    'custom.aa_theme.normal' => array(
      '1x' => 'project_preview_breakpoints_theme_aa_theme_normal_1x',
    ),
  );
  $export['aa_project_preview'] = $picture_mapping;

  return $export;
}
